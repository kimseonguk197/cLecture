

#include <stdio.h>

//�迭�� �޸� ����
/*
int main() {
	int i;
	int sum = 0;
	int grade[3];        // ���̰� 3�� int�� �迭 ����

	grade[0] = 85;       // ���� ����
	grade[1] = 65;       // ���� ����
	grade[2] = 90;       // ���� ����

	printf("�迭�� �޸� �ּ� %x\n", grade);
	printf("�迭�� �޸� �ּ� %#x\n", &grade);
	printf("���������� �޸� �ּ� %d\n", &grade[0]);
	printf("���������� �޸� �ּ� %d\n", &grade[1]);
	printf("���������� �޸� �ּ� %d\n", &grade[2]);

	int* ptrgrade = grade;
	printf("���������� �޸� �ּ� %#x\n", ptrgrade + 1);
	printf("���������� �޸� �ּ� %#x\n", ptrgrade + 2);
	printf("���������� �޸� �ּ� %#x\n", grade + 3);

	return 0;
}*/

//�迭�� �޸� ����

/*
int main() {
	int i;
	int sum = 0;
	int grade[3];        // ���̰� 3�� int�� �迭 ����

	grade[0] = 85;       // ���� ����
	grade[1] = 65;       // ���� ����
	grade[2] = 90;       // ���� ����

	printf("grade��? %d\n", sizeof(grade));
	printf("��������? %d\n", grade[0]);
	printf("��������? %d\n", grade[1]);
	printf("��������? %d\n", grade[2]);

	int* ptrgrade = grade;

	printf("��������? %d\n", *(grade + 2));
	printf("��������? %d\n", *(ptrgrade + 1));
	printf("��������? %d\n", ptrgrade[2]);
	return 0;
}
*/

//�迭�� �������� ���踦 �̿��� Ȱ��
/*
void local(int*);
int main(void)
{
	int arr[3] = {10, 20, 30};
	local(arr);
	return 0;
}
void local(int* arr){
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}
}
*/

//�����͹迭
/*
int main() {
	int i, arr_len;
	int num01 = 10, num02 = 20, num03 = 30;
	int* arr[3] = { &num01, &num02, &num03 }; // int�� ������ �迭 ����

	arr_len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < arr_len; i++)
	{
		printf("%d\n", *arr[i]);

	}
}*/


//�迭������
/*
int main(){
	int arr[2][3] = {

		{10, 20, 30},

		{40, 50, 60}

	};
	printf("%d\n", *(arr[0]+1));
	printf("%d\n", *arr[1]);
	printf("%#x\n", arr[0]);
	printf("%d\n", sizeof(arr[0]) / sizeof(int));
}
*/

//�迭������ �������
/*
void printArr(int(*pArr), int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
			printf("%d ", pArr[i][j]);
		printf("\n");
	}
}
int main() {
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	printArr(arr, row, col);


}*/

//�Ű������� �������� ���� ���� ���޹ް�, �迭ó�� �ε����� ���ϰ� ����� �� �ֽ��ϴ�.
//�� ������ ������δ� int(*pArr)[4]�� int pArr[][4]�� �ٲ��൵ ������ �����մϴ�.�ֳĸ�* pArr�� pArr[]�� ���� ���� �ǹ��̱� �����Դϴ�.
//https://reakwon.tistory.com/33 ����


//�޸� ���� - ����
/*int main(void)
{
	func1();  // func1() ȣ��
	return 0;
}
void func1()
{
	func2();  // func2() ȣ��
}
void func2()
{
}
*/

//�޸��� �����Ҵ�
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

int main() {
	int num1 = 20;    // int�� ���� ����
	int* numPtr1;     // int�� ������ ����
	numPtr1 = &num1;  // num1�� �޸� �ּҸ� ���Ͽ� numPtr�� �Ҵ�
	printf("%#x\n", numPtr1);    // ���� num1�� �޸� �ּ� ���

	int ptr2 = local();
	int* test = ptr2;
	printf("%#x\n", test);     // �� �Ҵ�� �޸��� �ּ� ���
								
	printf("%d\n", *test);     // �� �Ҵ�� �޸��� �� ���
								// ��ǻ�͸���, ������ ������ �޶���


	return 0;
}

int local() {

	int* numPtr2;     // int�� ������ ����
	numPtr2 = malloc(sizeof(int));    // int�� ũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ� (int*) �� ���� ����.
	*numPtr2 = 3;
	printf("%d\n", *numPtr2);     // �� �Ҵ�� �޸��� �� ���
	printf("%#x\n", numPtr2);     // �� �Ҵ�� �޸��� �ּ� ���
	//free(numPtr2);    // �������� �Ҵ��� �޸� ����

	return numPtr2;
}