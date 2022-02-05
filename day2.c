#include <stdio.h>	

//제어문 - 조건문 - if문
/*
int main(void) {

	int num;
	printf("원하는 숫자를 입력하시오");
	scanf("%d", &num);

	if (num > 5)
	{
		printf("입력하신 수는 5보다 큽니다.\n");
	}
	if (num == 5)
	{
		printf("입력하신 수는 5입니다.\n");
	}
	if (num < 5)
	{
		printf("입력하신 수는  5보다 작습니다.\n");
	}
}

*/

//제어문 - 조건문 - if, else문
//문제1
/*
int main(void) {
	int num;
	printf("현재 얼마 가지고 있나요?");
	scanf("%d", &num);

	if (num >= 10000)
	{
		printf("택시를 타시오.\n");
	}
	else {
		printf("걸어 가시오.\n");
	}
}
*/

//제어문 - 조건문 - if, else문
//문제2
/*
int main(void) {
	int num;
	char yorn;
	printf("현재 얼마 가지고 있나요?");
	scanf("%d", &num);
	rewind(stdin);
	printf("다리가 아프신가요?");
	scanf("%c", &yorn, 1);

	if (num >= 10000 && yorn == 'y')
	{
		printf("택시를 타시오.\n");
	}
	else {
		printf("걸어 가시오.\n");
	}
	return 0;
}
*/


//제어문 - 조건문 - if, else if, else문
/*
int main(void) {

	int num;
	printf("원하는 숫자를 입력하시오");
	scanf("%d", &num);

	if (num > 5)
	{
		printf("입력하신 수는 5보다 큽니다.\n");
	}
	else if (num == 5)
	{
		printf("입력하신 수는 5입니다.\n");
	}
	else
	{
		printf("입력하신 수는 5보다 작습니다.\n");
	}
}
*/

//제어문 - switch문
/*
int main(void) {
	int num;
	printf("은행 콜센터 프로그램입니다. 원하시는 서비스 번호를 누르세요.");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("예금관련 업무입니다.");
		break;

	case 2:
		printf("대출관련 업무입니다.");
		break;

	case 3:
		printf("송금관련 업무입니다.");
		break;

	default:
		printf("1~3번까지의 수만 입력해주세요.");
		break;
	}
}
*/

//반복문 - while문
/*
int main(void) {
	int a = 0;
	int b = 10;
	while (a < 10) {
		printf("% d 번째 입니다. \n", a);
		a++;
	}
}
*/


//반복문 - while 문, 나무찍기 예제
/*
int main(void) {
	int a = 0;
	int b = 10;
	while (a < b) {
		a++;
		printf("나무를 %d번 찍습니다.\n", a);
		if (a == 10) {
			printf("나무 넘어갑니다.");
		}
	}
}
*/

//반복문 - do / while 문, 나무찍기 예제
/*
int main(void) {
	int a = 0;
	int b = 10;
	do {
		a++;
		printf("나무를 %d 번 찍습니다.\n", a);

	} while (a < b);
}
*/


//배열 선행학습
/*
int main(void) {
	int a1 = 10; int a2 = 20; int a3 = 30;
	int arr[3] = { 10, 20, 30 };
	printf("%d", arr[0]);
	return 0;
}
*/

//반복문 - for문 , 나무찍기 예제
/*
int main(void) {
	int i;
	for (i = 1; i < 11; i++) {
		printf("나무를 %d번 찍습니다 \n", i);
	}
	printf("i의 값은? %d", i);
}
*/
//for문을 통해 배열 출력

/*
int main(void) {
	int lista[5] = { 90, 25, 67, 45, 80 };
	//printf("배열의 메모리 사이즈 %d\n", sizeof(lista));
	//printf("배열요소 1개의 메모리 사이즈 %d\n", sizeof(lista[0]));
	//printf("배열의 길이 %d\n", sizeof(lista) / sizeof(lista[0]));

	for (int i = 0; i < 5; i++) {
		//printf("%d\n", lista[i]);
		if (lista[i] > 60) {
			printf("%d 번째 학생은 합격입니다. \n", i);
		}
	}

}
*/



//반복문 - for문 , 나무찍기 예제, break
/*
int main(void) {
	
	for (int i = 1; i < 11; i++) {
		printf("나무를 %d번 찍습니다 \n", i);
		if (i == 5) {
			break;
		}
	}
}
*/




//반복문 -while문, continue
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


//2중포문 구구단

int main(void) {
	for (int i = 2; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%d X %d 는 %d \n", i, j, i * j);
		}
	}
}