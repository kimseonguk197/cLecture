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
	char c = 'a';
	char* ptrc = &c;
	printf("%d\n", *ptr);
	printf("%#x\n", ptr);
	printf("%#x\n", ptr+1);
	printf("%#x\n", &ptr);
	printf("%#x\n", *&ptr);
	//printf("%d\n", sizeof(ptrc));

}*/



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
/*
//�������� ������ ����
int main() {
	int num = 10;              // ���� ����
	int* ptr_num = &num;       // ������ ����
	int** pptr_num = &ptr_num; // �������� ������ ����
	printf("���� num�� �����ϰ� �ִ� ���� %d�Դϴ�.\n", num);
	printf("������  ptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num);
	printf("�������� ������ pptr_num�� ����Ű�� �ּҿ� ����� �����Ͱ� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", **pptr_num);
}
*/
