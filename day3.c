#include <stdio.h>	
//��� �˰��� - �ִ밪

/*
int main(void) {
	int lista[9] = { 93, 45, 21, 30, 20, 94, 66, 71, 45 };
	int max = lista[0], min = lista[0];
	int lenga = sizeof(lista) / sizeof(int);
	//printf("lenga�� ����? %d", lenga);
	for (int i = 0; i < lenga; i++) {
		if (lista[i] > max) {
			max = lista[i];
		}
		if (lista[i] < min) {
			min = lista[i];
		}
	}
	printf("�ִ밪�� %d, �ּҰ��� %d", max, min);
}
*/



//��� �˰��� - �������� �˰���
/*
int main(void) {
	int lista[9] = { 93, 45, 21, 30, 20, 94, 66, 71, 45 };
	int lenga = sizeof(lista) / sizeof(int);
	int max = lista[0], min = lista[0];
	for (int i = 0; i < lenga - 1; i++) {
		for (int j = i+1; j < lenga; j++) {
			if (lista[i] > lista[j]) {
				int temp = lista[i];
				lista[i] = lista[j];
				lista[j] = temp;
			}
		}
	}
	for (int i = 0; i < lenga; i++) {
		printf("%d ", lista[i]);
	}
}
*/


//�Լ� - sum�Լ� ������
/*
int main(void) {
	int result = add(1, 2);
	printf("%d ", result);
	return 0;
}

int add(int a, int b) {
	int c = a + b;
	return c;
}
*/



//�Լ� - bigNum�Լ� ������
/*
int main(void) {
	int result = bigNum(11, 2);
	printf("%d ", result);
	return 0;
}
int bigNum(int a, int b) {
	int c;
	if (a > b) {
		c = a;
	}
	else {
		c = b;
	}
	return c;
}
*/

//�Լ��� ��������
/*
int bigNum(int, int);
int main(void) {
	int result = bigNum(11, 2);
	printf("%d ", result);
	return 0;
}
int bigNum(int a, int b) {
	int c;
	if (a > b) {
		c = a;
	}
	else {
		c = b;
	}
	return c;
}
*/


//����Լ� ����
//for�� ����
/*
int main(void) {
	int result = sum(10);
	printf("%d ", result);
	return 0;
}
int sum(int n) {
	int i;
	int result = 0;
	for (i = 1; i <= n; i++)
	{
		result += i;
	}
	return result;

}
*/
//����Լ� ����
/*
int Sum(int n)
{
	if (n == 1)           // n�� 1�̸�, �׳� 1�� ��ȯ��.
	{
		return 1;
	}
	return n + Sum(n - 1); // n�� 1�� �ƴϸ�, n�� 1���� (n-1)������ �հ� ���� ���� ��ȯ��.
}
*/

//����Լ� ���� ��뿹�� >> ����
/*
#pragma warning ( disable : 4996 )
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <Windows.h>

struct _finddata_t fd;

int isFileOrDir()
{
	if (fd.attrib & _A_SUBDIR)
		return 0; // ���丮�� 0 ��ȯ
	else
		return 1; // �׹��� ���� "�����ϴ� ����"�̱⿡ 1 ��ȯ

}

void FileSearch(char file_path[])
{
	intptr_t handle;
	int check = 0;
	char file_path2[_MAX_PATH];

	strcat(file_path, "\\");
	strcpy(file_path2, file_path);
	strcat(file_path, "*");

	if ((handle = _findfirst(file_path, &fd)) == -1)
	{
		printf("No such file or directory\n");
		return;
	}

	while (_findnext(handle, &fd) == 0)
	{
		char file_pt[_MAX_PATH];
		strcpy(file_pt, file_path2);
		strcat(file_pt, fd.name);

		check = isFileOrDir();    //�������� ���丮 ���� �ĺ�

		if (check == 0 && fd.name[0] != '.')
		{
			FileSearch(file_pt);    //���� ���丮 �˻� ����Լ�
		}
		else if (check == 1 && fd.size != 0 && fd.name[0] != '.')
		{
			printf("���ϸ� : %s, ũ��:%d\n", file_pt, fd.size);
		}
	}
	_findclose(handle);
}

int main()
{
	char file_path[_MAX_PATH] = "c:";    //C:\ ��� Ž��

	FileSearch(file_path);

	return 0;
}
*/

//������  - ��������
/*
void local(void)
{
	int var = 20;
	printf("local() �Լ� ���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
}
int main(void)
{
	int i = 5;
	int var = 10;
	printf("main() �Լ� ���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
	if (i < 10)
	{
		local();
		int var = 30;
		printf("if �� ���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
	}
	printf("���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
	return 0;
}
*/

//������ ��ȿ���� - for��
/*
int main(void)
{
	for (int i = 0; i < 10; i++) {
		printf("%d", i);
	}
	printf("%d", i);
}*/




//������ ��ȿ���� - ��������
/*
void local(void);
int var; // ���� ���� ����    
int main(void)
{
	printf("���� ���� var�� �ʱ갪�� %d�Դϴ�.\n", var);
	int i = 5;
	int var = 10; // ���� ���� ����
	printf("main() �Լ� ���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
	if (i < 10)
	{
		local();
		printf("���� ���� var�� ���� %d�Դϴ�.\n", var); //
	}
	printf("�� �̻� main() �Լ������� ���� ���� var�� ������ ���� �����ϴ�.\n");
	return 0;

}

void local(void)
{
	var = 20; // ���� ������ �� ����
	printf("local() �Լ� ������ ������ ���� ���� var�� ���� %d�Դϴ�.\n", var);
}*/