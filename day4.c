#include <stdio.h>	

//�������� - 2��������� https://coding-factory.tistory.com/135
/*
int main(void) {

	//int arra[5] = { 20,25,10,8,30 };
	int arra[8] = { 1, 20,25,10,8,30, 11, 4 };
	for(int i = 0; i < 8; i++) {
		for (int j = 0; j < i; j++) {
			if(arra[j] >  arra[i]){
				int temp = arra[j];
				arra[j] = arra[i];
				for (int k = j; k < i; k++) {
					int temp2 = arra[k+1];
					arra[k+1] = temp;
					temp = temp2;
				}
			}
		}
	}
	for (int a = 0; a < 8; a++) {
		printf("%d ", arra[a]);
	}

}
*/

//�������� - for��+while�� ���
/*
int main() {
	int arr[5] = { 5, 16, 1, 4, 12 };
	int temp;
	for (int i = 0; i < 5; i++) {
		int j = i - 1;
		while ((arr[j] > arr[j + 1]) && (j >= 0)) {
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
*/

//2���� �迭
/*
int main() {

	int arr[2][3] = { 
		{1,2,3}, 
		{1,2,3} 
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

//�迭�� ����, ��� ���ϱ� ����
/*
int main() {
	int i;
	int sum = 0;
	int grade[3] = { 85, 65, 90 }; // ���̰� 3�� int�� �迭�� ����� ���ÿ� �ʱ�ȭ  
	for (i = 0; i < 3; i++)
	{
		sum += grade[i];
	}
	printf("������ ���� �� ���� �հ�� %d�̰�, ��� ������ %f�Դϴ�.\n", sum, (double)(sum / 3));
}
*/

//�������� �⺻����� �⺻Ȱ��
/*
int main() {
	int n = 100;
	int*ptr = & n; 
	printf("%d\n", *ptr);
	printf("%#x\n", ptr);
	printf("%#x\n", ptr+1);

}
*/



//���� ���� ���� VS ������ ���� ����
/*
void local(int);
int main(void)
{
	int var = 10;
	printf("���� var�� �ʱ갪�� %d�Դϴ�.\n", var);
	local(var);
	//���ÿ��� �Ű������� �޴� var�� ������ �Ϲݸ�Ī�� ���̴�. �޸𸮻� �������� �ٶ󺸴� ������ �ƴϴ�.
	printf("local() �Լ� ȣ�� �� ���� var�� ���� %d�Դϴ�.\n", var);
	return 0;
}
void local(int var)
{
	var += 10;
}
*/
/*
void local(int*);
int main(void)
{
	int var = 10;
	printf("���� var�� �ʱ갪�� %d�Դϴ�.\n", var);
	local(&var);
	//loca���� �Ű������� �޴� var�� ���������μ�, main�� var�� �޸𸮻� �������� �ٶ󺸴� ������ �ƴϴ�.
	printf("local() �Լ� ȣ�� �� ���� var�� ���� %d�Դϴ�.\n", var);
	return 0;
}
void local(int* var)
{
	*var += 10;
}
*/

//�������� ���� : �������� ����
/*
int main(void)
{
	//�Ʒ� ���� ��� �����Ϳ� ����� �ʱ� �ּҰ��� 0x00
	char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;
	printf("������ ptr_char�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_char);
	printf("������ ptr_int�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_int);
	printf("������ ptr_double�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_double);
	printf("������ ptr_char�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_char);
	printf("������ ptr_int�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_int);
	printf("������ ptr_double�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_double);
}
*/

//�����ͳ����� ����
/*
int main(void)
{
	int num01 = 10;
	int num02 = 20;
	int* ptr_num01 = &num01;
	int* ptr_num02 = &num02;
	if (ptr_num01 != ptr_num02) // �����ͳ����� �� ����
	{
		printf("������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
		printf("������ ptr_num02�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num02);
		printf("������ ptr_num01�� ptr_num02�� ���� �ٸ� �ּҸ� ����Ű�� �ֽ��ϴ�.\n\n");
		ptr_num02 = ptr_num01; // �����ͳ����� ���� ����
	}
	printf("������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
	printf("������ ptr_num02�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num02);
	if (ptr_num01 == ptr_num02) // �����ͳ����� �� ����
	{
		printf("������ ptr_num01�� ptr_num02�� ���� ���� �ּҸ� ����Ű�� �ֽ��ϴ�.\n");
	}
}
*/
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
}
*/

//�迭�� �������� ���踦 �̿��� Ȱ��
void printArr(int(*pArr)[4], int row, int col) {
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


}
//�Ű������� �������� ���� ���� ���޹ް�, �迭ó�� �ε����� ���ϰ� ����� �� �ֽ��ϴ�.
//�� ������ ������δ� int(*pArr)[4]�� int pArr[][4]�� �ٲ��൵ ������ �����մϴ�.�ֳĸ�* pArr�� pArr[]�� ���� ���� �ǹ��̱� �����Դϴ�.
//https://reakwon.tistory.com/33 ����