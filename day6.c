#include <stdio.h>
#include <string.h>


//입출력함수 총정리
//scanf
/*
int main(void)
{
	//scanf
	//int num;
	//printf("숫자를 입력해주세요");
	//scanf("%d", &num);  
	//만약에 "%d " 또는 "%d\n"을 하면 숫자뒤에 공백이 아닌 다른 값이 나오기 전까지의 기다리라는 의미. ex)scanf("%d %d", &num, &num02); 
	
	//printf("%d", num);

	//scanf의 개행이슈해결 >> " %c"를 하거나(공백이후에 문자값이 나올때까지 기다리라는 의미), rewind(stdin)
	//char a;
	//printf("숫자를 입력해주세요");
	//scanf("%d", &num);
	//printf("문자를 입력해주세요");
	//scanf("%c", &a);

	//문자열 입력
	char aa[4];
	scanf("%s", aa);
	printf("%s", aa);

}*/

//printf와 puts의 차이
/*
int main(void)
{	
	char str[] = "hello";
	printf("%d %s %c \n", 1, "hello", 'a');
	puts("hello c언어 %d", 3);
	puts(str);
}
*/

//getchar() putchar
/*
int main(void)
{
	char ch;
	ch = getchar();
	//printf("%c", ch);
	//putchar(ch);
}
*/

//EOF
/*
int main(void)

{
	char ch;
	printf("EOF가 입력될 때까지 영문자를 계속 입력받습니다 :\n");
	printf("(윈도우에서 EOF의 강제 발생은 Ctrl+Z를 누르고 나서 Enter를 누르면 됩니다)\n");
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;

}
*/


//문자열
/*
int main(void)
{
	char str01[] = "This is a string.";    // 크기를 지정하지 않은 문자열 변수 선언
	char str02[7] = "string";              // 크기를 지정한 문자열 변수 선언

	for (int i = 0; i < 7; i++) {
		printf("%c", str02[i]);
	}

	printf("문자열 str01에 저장되어 있는 문자열은 \"%s\"입니다.\n", str01);
	printf("문자열 str02에 저장되어 있는 문자열은 \"%s\"입니다.\n", str02);

	char str[] = "C언어";
	printf("이 문자열의 길이는 %d입니다.\n", strlen(str));
}
*/

/*
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
/* 문자열 1번 포인터로 풀어보기*/
/*
int main() {
	char s1[30] = " ";
	char s2[30] = " ";
	int len1 = 0, len2 = 0;
	int max_len = 0;
	char* ps1, * ps2;

	scanf("%s", s1);
	scanf("%s", s2);
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len1 > len2) {
		max_len = len1;
	}
	else {
		max_len = len2;
	}


	ps1 = s1;
	ps2 = s2;
	int i = 0;

	for (i = 0; i < max_len; i++) {

		if (*(ps1 + i) == *(ps2 + i)) printf("O");
		else printf("X");
	}
	return 0;

}
*/


/* 문자열 2번 함수로 구현하기*/
/*
void changestr(char* p, int len);
int main() {
	char s[30] = "";
	int N;
	int len;
	scanf("%s", s);
	scanf("%d", &N);
	len = strlen(s);
	for (int i = 0; i < N; i++) {
		changestr(s, len);
	}
	printf("%s", s);
	return 0;

}
//simpson ==> changestr ==> impsons
void changestr(char* p, int len)
{

	for (int i = 0; i < len - 1; i++) {

		char temp = *p;
		*p = *(p + 1);
		*(p + 1) = temp;
		p++;
	}

}
*/

//문자열 포인터 3번문제
/*#pragma warning(disable:4996)
#include <stdio.h>
addArray(int* a, int* b, int* c, int n);
int main() {
    int N;
    int Num[3];
    int Num2[3];
    int sum_Num[3] = { 0 };
    int* a, * b, * c,*p1;
    scanf("%d", &N);
    for (a = Num; a < Num + N; a++) {
        scanf("%d", a);
    }
    for (b = Num2; b < Num2 + N; b++) {
        scanf("%d", b);
    }
    c = sum_Num;
    addArray(Num, Num2, sum_Num,N);
 
    for (p1=c;p1<c+N;p1++){
        printf("%d ",*p1);
    }
    return 0;
}
 
addArray(int* a, int* b, int* c, int n)
{
    int* p;
 
    for (p = c; p < c + n; p++) {
 
        *p = *a + *(b+n-1);
        a++;
        b--;
 
    }
}
*/


//구조체 기본
/*
int main() {

	struct book
	{
		char title[30];
		char author[30];
		int price;
	};
	struct book mybook = {"HTML과 CSS", "홍길동", 28000};
	struct book friendbook = { .title = "java", .author = "홍길순", 14000 };
	printf("나의 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", mybook.title, mybook.author, mybook.price);

	printf("친구의 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", friendbook.title, friendbook.author, friendbook.price);
}
*/

//구조체 배열
int main() {
	struct book
	{
		char title[30];
		char author[30];
		int price;
	};
	struct book text_book[3] =
	{
		{"국어", "홍길동", 15000},
		{"영어", "이순신", 18000},
		{"수학1", "강감찬", 10000}
	};
	puts("각 교과서의 이름은 다음과    같습니다.");
	printf("%s, %s, %s\n", text_book[0].title, text_book[1].title, text_book[2].title);
}