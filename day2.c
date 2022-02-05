#include <stdio.h>	

//��� - ���ǹ� - if��
/*
int main(void) {

	int num;
	printf("���ϴ� ���ڸ� �Է��Ͻÿ�");
	scanf("%d", &num);

	if (num > 5)
	{
		printf("�Է��Ͻ� ���� 5���� Ů�ϴ�.\n");
	}
	if (num == 5)
	{
		printf("�Է��Ͻ� ���� 5�Դϴ�.\n");
	}
	if (num < 5)
	{
		printf("�Է��Ͻ� ����  5���� �۽��ϴ�.\n");
	}
}

*/

//��� - ���ǹ� - if, else��
//����1
/*
int main(void) {
	int num;
	printf("���� �� ������ �ֳ���?");
	scanf("%d", &num);

	if (num >= 10000)
	{
		printf("�ýø� Ÿ�ÿ�.\n");
	}
	else {
		printf("�ɾ� ���ÿ�.\n");
	}
}
*/

//��� - ���ǹ� - if, else��
//����2
/*
int main(void) {
	int num;
	char yorn;
	printf("���� �� ������ �ֳ���?");
	scanf("%d", &num);
	rewind(stdin);
	printf("�ٸ��� �����Ű���?");
	scanf("%c", &yorn, 1);

	if (num >= 10000 && yorn == 'y')
	{
		printf("�ýø� Ÿ�ÿ�.\n");
	}
	else {
		printf("�ɾ� ���ÿ�.\n");
	}
	return 0;
}
*/


//��� - ���ǹ� - if, else if, else��
/*
int main(void) {

	int num;
	printf("���ϴ� ���ڸ� �Է��Ͻÿ�");
	scanf("%d", &num);

	if (num > 5)
	{
		printf("�Է��Ͻ� ���� 5���� Ů�ϴ�.\n");
	}
	else if (num == 5)
	{
		printf("�Է��Ͻ� ���� 5�Դϴ�.\n");
	}
	else
	{
		printf("�Է��Ͻ� ���� 5���� �۽��ϴ�.\n");
	}
}
*/

//��� - switch��
/*
int main(void) {
	int num;
	printf("���� �ݼ��� ���α׷��Դϴ�. ���Ͻô� ���� ��ȣ�� ��������.");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("���ݰ��� �����Դϴ�.");
		break;

	case 2:
		printf("������� �����Դϴ�.");
		break;

	case 3:
		printf("�۱ݰ��� �����Դϴ�.");
		break;

	default:
		printf("1~3�������� ���� �Է����ּ���.");
		break;
	}
}
*/

//�ݺ��� - while��
/*
int main(void) {
	int a = 0;
	int b = 10;
	while (a < 10) {
		printf("% d ��° �Դϴ�. \n", a);
		a++;
	}
}
*/


//�ݺ��� - while ��, ������� ����
/*
int main(void) {
	int a = 0;
	int b = 10;
	while (a < b) {
		a++;
		printf("������ %d�� ����ϴ�.\n", a);
		if (a == 10) {
			printf("���� �Ѿ�ϴ�.");
		}
	}
}
*/

//�ݺ��� - do / while ��, ������� ����
/*
int main(void) {
	int a = 0;
	int b = 10;
	do {
		a++;
		printf("������ %d �� ����ϴ�.\n", a);

	} while (a < b);
}
*/


//�迭 �����н�
/*
int main(void) {
	int a1 = 10; int a2 = 20; int a3 = 30;
	int arr[3] = { 10, 20, 30 };
	printf("%d", arr[0]);
	return 0;
}
*/

//�ݺ��� - for�� , ������� ����
/*
int main(void) {
	int i;
	for (i = 1; i < 11; i++) {
		printf("������ %d�� ����ϴ� \n", i);
	}
	printf("i�� ����? %d", i);
}
*/
//for���� ���� �迭 ���

/*
int main(void) {
	int lista[5] = { 90, 25, 67, 45, 80 };
	//printf("�迭�� �޸� ������ %d\n", sizeof(lista));
	//printf("�迭��� 1���� �޸� ������ %d\n", sizeof(lista[0]));
	//printf("�迭�� ���� %d\n", sizeof(lista) / sizeof(lista[0]));

	for (int i = 0; i < 5; i++) {
		//printf("%d\n", lista[i]);
		if (lista[i] > 60) {
			printf("%d ��° �л��� �հ��Դϴ�. \n", i);
		}
	}

}
*/



//�ݺ��� - for�� , ������� ����, break
/*
int main(void) {
	
	for (int i = 1; i < 11; i++) {
		printf("������ %d�� ����ϴ� \n", i);
		if (i == 5) {
			break;
		}
	}
}
*/




//�ݺ��� -while��, continue
/*
int main(void) {
	int a = 0;
	while (a < 100) {
		a++;
		if (a % 2 == 0) {
			continue;
		}
		printf("%d\n", a);
		
	}
	return 0;
}
*/


//2������ ������

int main(void) {
	for (int i = 2; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%d X %d �� %d \n", i, j, i * j);
		}
	}
}