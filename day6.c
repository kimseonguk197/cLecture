#include <stdio.h>
#include <string.h>


//������Լ� ������
//scanf
/*
int main(void)
{
	//scanf
	//int num;
	//printf("���ڸ� �Է����ּ���");
	//scanf("%d", &num);  
	//���࿡ "%d " �Ǵ� "%d\n"�� �ϸ� ���ڵڿ� ������ �ƴ� �ٸ� ���� ������ �������� ��ٸ���� �ǹ�. ex)scanf("%d %d", &num, &num02); 
	
	//printf("%d", num);

	//scanf�� �����̽��ذ� >> " %c"�� �ϰų�(�������Ŀ� ���ڰ��� ���ö����� ��ٸ���� �ǹ�), rewind(stdin)
	//char a;
	//printf("���ڸ� �Է����ּ���");
	//scanf("%d", &num);
	//printf("���ڸ� �Է����ּ���");
	//scanf("%c", &a);

	//���ڿ� �Է�
	char aa[4];
	scanf("%s", aa);
	printf("%s", aa);

}*/

//printf�� puts�� ����
/*
int main(void)
{	
	char str[] = "hello";
	printf("%d %s %c \n", 1, "hello", 'a');
	puts("hello c��� %d", 3);
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
	printf("EOF�� �Էµ� ������ �����ڸ� ��� �Է¹޽��ϴ� :\n");
	printf("(�����쿡�� EOF�� ���� �߻��� Ctrl+Z�� ������ ���� Enter�� ������ �˴ϴ�)\n");
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;

}
*/


//���ڿ�
/*
int main(void)
{
	char str01[] = "This is a string.";    // ũ�⸦ �������� ���� ���ڿ� ���� ����
	char str02[7] = "string";              // ũ�⸦ ������ ���ڿ� ���� ����

	for (int i = 0; i < 7; i++) {
		printf("%c", str02[i]);
	}

	printf("���ڿ� str01�� ����Ǿ� �ִ� ���ڿ��� \"%s\"�Դϴ�.\n", str01);
	printf("���ڿ� str02�� ����Ǿ� �ִ� ���ڿ��� \"%s\"�Դϴ�.\n", str02);

	char str[] = "C���";
	printf("�� ���ڿ��� ���̴� %d�Դϴ�.\n", strlen(str));
}
*/

/*
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
/* ���ڿ� 1�� �����ͷ� Ǯ���*/
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


/* ���ڿ� 2�� �Լ��� �����ϱ�*/
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

//���ڿ� ������ 3������
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


//����ü �⺻
/*
int main() {

	struct book
	{
		char title[30];
		char author[30];
		int price;
	};
	struct book mybook = {"HTML�� CSS", "ȫ�浿", 28000};
	struct book friendbook = { .title = "java", .author = "ȫ���", 14000 };
	printf("���� å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n", mybook.title, mybook.author, mybook.price);

	printf("ģ���� å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n", friendbook.title, friendbook.author, friendbook.price);
}
*/

//����ü �迭
int main() {
	struct book
	{
		char title[30];
		char author[30];
		int price;
	};
	struct book text_book[3] =
	{
		{"����", "ȫ�浿", 15000},
		{"����", "�̼���", 18000},
		{"����1", "������", 10000}
	};
	puts("�� �������� �̸��� ������    �����ϴ�.");
	printf("%s, %s, %s\n", text_book[0].title, text_book[1].title, text_book[2].title);
}