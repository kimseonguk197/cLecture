

#include <stdio.h>

//배열의 메모리 구조
/*
int main() {
	int i;
	int sum = 0;
	int grade[3];        // 길이가 3인 int형 배열 선언

	grade[0] = 85;       // 국어 점수
	grade[1] = 65;       // 영어 점수
	grade[2] = 90;       // 수학 점수

	printf("배열의 메모리 주소 %x\n", grade);
	printf("배열의 메모리 주소 %#x\n", &grade);
	printf("국어점수의 메모리 주소 %d\n", &grade[0]);
	printf("영어점수의 메모리 주소 %d\n", &grade[1]);
	printf("수학점수의 메모리 주소 %d\n", &grade[2]);

	int* ptrgrade = grade;
	printf("국어점수의 메모리 주소 %#x\n", ptrgrade + 1);
	printf("영어점수의 메모리 주소 %#x\n", ptrgrade + 2);
	printf("수학점수의 메모리 주소 %#x\n", grade + 3);

	return 0;
}*/

//배열의 메모리 구조

/*
int main() {
	int i;
	int sum = 0;
	int grade[3];        // 길이가 3인 int형 배열 선언

	grade[0] = 85;       // 국어 점수
	grade[1] = 65;       // 영어 점수
	grade[2] = 90;       // 수학 점수

	printf("grade는? %d\n", sizeof(grade));
	printf("국어점수? %d\n", grade[0]);
	printf("영어점수? %d\n", grade[1]);
	printf("수학점수? %d\n", grade[2]);

	int* ptrgrade = grade;

	printf("국어점수? %d\n", *(grade + 2));
	printf("수학점수? %d\n", *(ptrgrade + 1));
	printf("영어점수? %d\n", ptrgrade[2]);
	return 0;
}
*/

//배열과 포인터의 관계를 이용한 활용
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

//포인터배열
/*
int main() {
	int i, arr_len;
	int num01 = 10, num02 = 20, num03 = 30;
	int* arr[3] = { &num01, &num02, &num03 }; // int형 포인터 배열 선언

	arr_len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < arr_len; i++)
	{
		printf("%d\n", *arr[i]);

	}
}*/


//배열포인터
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

//배열포인터 사용이유
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

//매개변수를 받으려면 위와 같이 전달받고, 배열처럼 인덱싱을 편하게 사용할 수 있습니다.
//더 간편한 방법으로는 int(*pArr)[4]를 int pArr[][4]로 바꿔줘도 실행이 가능합니다.왜냐면* pArr은 pArr[]과 거의 같은 의미이기 때문입니다.
//https://reakwon.tistory.com/33 참고


//메모리 구조 - 스택
/*int main(void)
{
	func1();  // func1() 호출
	return 0;
}
void func1()
{
	func2();  // func2() 호출
}
void func2()
{
}
*/

//메모리의 동적할당
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main() {
	int num1 = 20;    // int형 변수 선언
	int* numPtr1;     // int형 포인터 선언
	numPtr1 = &num1;  // num1의 메모리 주소를 구하여 numPtr에 할당
	printf("%#x\n", numPtr1);    // 변수 num1의 메모리 주소 출력

	int ptr2 = local();
	int* test = ptr2;
	printf("%#x\n", test);     // 로 할당된 메모리의 주소 출력
								
	printf("%d\n", *test);     // 로 할당된 메모리의 값 출력
								// 컴퓨터마다, 실행할 때마다 달라짐


	return 0;
}

int local() {

	int* numPtr2;     // int형 포인터 선언
	numPtr2 = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당 (int*) 는 생략 가능.
	*numPtr2 = 3;
	printf("%d\n", *numPtr2);     // 로 할당된 메모리의 값 출력
	printf("%#x\n", numPtr2);     // 로 할당된 메모리의 주소 출력
	//free(numPtr2);    // 동적으로 할당한 메모리 해제

	return numPtr2;
}