#define BUF_SIZE 1000
#define HEADER_FMT "HTTP/1.1 %d %s\nContent-Length: %ld\nContent-Type: %s\n\n"

#define NOT_FOUND_CONTENT       "<h1>404 Not Found</h1>\n"
#define SERVER_ERROR_CONTENT    "<h1>500 Internal Server Error</h1>\n"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <arpa/inet.h>


/*
    @func   assign address to the created socket lsock(sd)
    @return bind() return value
*/
int bind_lsock(int lsock, int port) {
    struct sockaddr_in sin;

    //AF는 접속하는 방식을 지정하는 것으로서 AF_INET는 IPv4주소체계 인터넷망접속을 의미
    sin.sin_family = AF_INET;
    //INADDR_ANY는 랜카드 중 사용가능한 랜카드의 IP주소를 의미
    sin.sin_addr.s_addr = htonl(INADDR_ANY);
    sin.sin_port = htons(port);
    
    //bind()함수는 소켓에 주소를 할당 해주는 함수
    return bind(lsock, (struct sockaddr*)&sin, sizeof(sin));
}

/*
    @func   format HTTP header by given params
    @return
*/
void fill_header(char* header, int status, long len, char* type) {
    char status_text[40];
    switch (status) {
    case 200:
        strcpy(status_text, "OK"); break;
    case 404:
        strcpy(status_text, "Not Found"); break;
    case 500:
    default:
        strcpy(status_text, "Internal Server Error"); break;
    }
    sprintf(header, HEADER_FMT, status, status_text, len, type);
}

/*
    @func   find content type from uri
    @return
*/
void find_mime(char* ct_type, char* uri) {
    char* ext = strrchr(uri, '.');
    if (!strcmp(ext, ".html"))
        strcpy(ct_type, "text/html");
    else if (!strcmp(ext, ".jpg") || !strcmp(ext, ".jpeg"))
        strcpy(ct_type, "image/jpeg");
    else if (!strcmp(ext, ".png"))
        strcpy(ct_type, "image/png");
    else if (!strcmp(ext, ".css"))
        strcpy(ct_type, "text/css");
    else if (!strcmp(ext, ".js"))
        strcpy(ct_type, "text/javascript");
    else strcpy(ct_type, "text/plain");
}

/*
    @func handler for not found
    @return
*/
void handle_404(int asock) {
    char header[BUF_SIZE];
    fill_header(header, 404, sizeof(NOT_FOUND_CONTENT), "text/html");

    write(asock, header, strlen(header));
    write(asock, NOT_FOUND_CONTENT, sizeof(NOT_FOUND_CONTENT));
}

/*
    @func handler for internal server error
    @return
*/
void handle_500(int asock) {
    char header[BUF_SIZE];
    fill_header(header, 500, sizeof(SERVER_ERROR_CONTENT), "text/html");

    write(asock, header, strlen(header));
    write(asock, SERVER_ERROR_CONTENT, sizeof(SERVER_ERROR_CONTENT));
}

/*
    @func main http handler; try to open and send requested resource, calls error handler on failure
    @return
*/
void http_handler(int asock) {
    char header[BUF_SIZE];
    char buf[BUF_SIZE];

    if (read(asock, buf, BUF_SIZE) < 0) {
        perror("[ERR] Failed to read request.\n");
        handle_500(asock); return;
    }

    char* method = strtok(buf, " ");
    char* uri = strtok(NULL, " ");
    if (method == NULL || uri == NULL) {
        perror("[ERR] Failed to identify method, URI.\n");
        handle_500(asock); return;
    }

    printf("[INFO] Handling Request: method=%s, URI=%s\n", method, uri);

    char safe_uri[BUF_SIZE];
    char* local_uri;
    struct stat st;

    strcpy(safe_uri, uri);
    if (!strcmp(safe_uri, "/")) strcpy(safe_uri, "/index.html");

    local_uri = safe_uri + 1;
    if (stat(local_uri, &st) < 0) {
        perror("[WARN] No file found matching URI.\n");
        handle_404(asock); return;
    }

    int fd = open(local_uri, O_RDONLY);
    if (fd < 0) {
        perror("[ERR] Failed to open file.\n");
        handle_500(asock); return;
    }

    int ct_len = st.st_size;
    char ct_type[40];
    find_mime(ct_type, local_uri);
    fill_header(header, 200, ct_len, ct_type);
    write(asock, header, strlen(header));

    int cnt;
    while ((cnt = read(fd, buf, BUF_SIZE)) > 0)
        write(asock, buf, cnt);
}

int main(int argc, char** argv) {
    int port, pid;
    int lsock, asock;

    //소켓(Socket)은, 프로세스가 네트워크를 통해서 데이터를 주고받으려면 반드시 열어야 하는 창구 같은 것
    //포트는 네트워크를 통해 데이터를 주고받는 프로세스를 식별하기 위해 호스트 내부적으로 프로세스가 할당받는 고유한 값
    struct sockaddr_in remote_sin;
    socklen_t remote_sin_len;

    //int argc는 정보의 갯수, argv는 전달되는 정보
    if (argc < 2) {
        printf("Usage: \n");
        printf("\t%s {port}: runs mini HTTP server.\n", argv[0]);
        exit(0);
    }

    port = atoi(argv[1]);
    printf("[INFO] The server will listen to port: %d.\n", port);

    //int socket(int domain, int type, int protocol);
    //socket() creates an endpoint for communicationand returns a descriptor.
    //AF_UNIX(프로토콜 내부에서), AF_INET(IPv4), AF_INET6(IPv6)
    //SOCK_STREAM(TCP), SOCK_DGRAM(UDP), SOCK_RAW(사용자 정의)
    //프로토콜의 값을 결정 0또는 IPPROTO_TCP(TCP 일때), IPPROTO_UDP(UDP 일때)
    lsock = socket(AF_INET, SOCK_STREAM, 0);
    if (lsock < 0) {
        perror("[ERR] failed to create lsock.\n");
        exit(1);
    }

    if (bind_lsock(lsock, port) < 0) {
        perror("[ERR] failed to bind lsock.\n");
        exit(1);
    }

    if (listen(lsock, 10) < 0) {
        perror("[ERR] failed to listen lsock.\n");
        exit(1);
    }

    // to handle zombie process
    signal(SIGCHLD, SIG_IGN);

    while (1) {
        printf("[INFO] waiting...\n");
        //accept 클라이언트 요청 수락함수 int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen)
        asock = accept(lsock, (struct sockaddr*)&remote_sin, &remote_sin_len);
        if (asock < 0) {
            perror("[ERR] failed to accept.\n");
            //continue를 통해 아래 로직 타지 않고 위로.
            continue;
        }

        //fork함수는 프로세스를 생성. fork 함수를 호출하는 프로세스는 부모 프로세스가 되고 새롭게 생성되는 프로세스는 자식 프로세스가 됩니다.
        pid = fork();
        if (pid == 0) {
            close(lsock); http_handler(asock); close(asock);
            exit(0);
        }

        if (pid != 0) { close(asock); }
        if (pid < 0) { perror("[ERR] failed to fork.\n"); }
    }
}

