#include <stdio.h>	

//hello world ���
/*int main(void) {
	printf("hello world");
	return 0;
}*/

/*
#define TEXT  "Welcome to C Programming!!"  
//define ���
int main(void) {
	printf(TEXT);
	return 0;
}
}*/


//printf()�Լ� - ���������� �� �̽������� 
/*
int main(void) {
	printf("%%c�� ����� ��� : %c\n", 'a');            // ����
	printf("%%s�� ����� ��� : %s\n", "��ſ� C���"); // ���ڿ�  

	printf("%%d�� ����� ��� : %d\n", 123);            // ����
	printf("%%f�� ����� ��� : %f\n", 0.123456);  //�Ǽ�
	printf("����� ������ %d�̸�, ����� ���ڿ��� %s�Դϴ�.\n", 123, "C���");  //������ ����


}
*/

//scanf()�Լ� - & �ּҿ����ڸ� ���� num������ �Է°��� ��´�.
/*
int main(void)

{
	int num01, num02;
	printf("ù ��° ������ �Է��ϼ��� : ");
	scanf("%d", &num01);

	printf("�� ��° ������ �Է��ϼ��� : ");
	scanf("%d", &num02);

	printf("�Է��Ͻ� �� ������ ���� %d�Դϴ�.\n", num01 + num02);
	return 0;

}
*/




//������ �޸�
/*
int main(void) {

	char a = 'a';
	printf("a�� �޸𸮻��� �ּҴ�? %d\n", &a);
	printf("a�� ũ���? %d\n", sizeof(a));
}
*/

//������ �ֿ� Ÿ��
/*
int main(void) {
	//(�Ǽ����� int���� ������) >> �սǹ߻�
	int num01 = 3.14152;
	printf("������ %d�Դϴ�.\n", num01);


	//(int���� float���� ������) >> �սǵɰ� ����.
	float num01 = 314;
	printf("������ %f�Դϴ�.\n", num01);

	char ch = 'a';
	printf("���� ch�� ����� ���� %c�Դϴ�.\n", ch);
	printf("���� ch�� ����� ���� %d�Դϴ�.\n", ch);

}*/

//������ - ���������
/*
int main(void) {
	int num01 = 10;
	int num02 = 4;

	printf("+ �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num01 + num02);
	printf("- �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num01 - num02);
	printf("* �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num01 * num02);
	printf("/ �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num01 / num02);
	printf("% �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num01 % num02);

}
*/
//���Կ�����
/*
int main(void) {

	int num01 = 7;
	int num02 = 7;
	int num03 = 7;

	num01 = num01 - 5;
	num02 -= 5;
	num03 = -5;

	printf("- �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num01);
	printf("-= �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num02);
	printf("=- �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num03);

}
*/

//����������
/*
int main(void) {

int num01 = 7;
int num02 = 7;
int result01, result02;

result01 = (++num01) - 5;
result02 = (num02++) - 5;

printf("���� ���� �����ڿ� ���� �ᱣ���� %d�̰�, ������ ���� %d�� ���߽��ϴ�.\n", result01, num01);
printf("���� ���� �����ڿ� ���� �ᱣ���� %d�̰�, ������ ���� %d�� ���߽��ϴ�.\n", result02, num02);

}*/

//�񱳿�����
/*
int main(void) {
	int num01 = 3;
	int num02 = 7;



	printf("== �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num01 == num02);
	printf("<= �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", num01 <= num02);
}
*/

//��������
/*
int main(void) {
	int num01 = 3;
	int num02 = -7;
	int result01, result02;

	result01 = (num01 > 0) && (num01 < 5);
	result02 = (num02 < 0) || (num02 > 10);

	printf("&& �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", result01);
	printf("|| �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", result02);
	printf(" ! �����ڿ� ���� �ᱣ���� %d�Դϴ�.\n", !result02);
}
*/

