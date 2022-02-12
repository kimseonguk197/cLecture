#include <stdio.h>	

//삽입정렬 - 2중포문방식 https://coding-factory.tistory.com/135
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

//삽입정렬 - for문+while문 방식
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

//2차원 배열
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

//배열에 총합, 평균 구하기 예제
/*
int main() {
	int i;
	int sum = 0;
	int grade[3] = { 85, 65, 90 }; // 길이가 3인 int형 배열의 선언과 동시에 초기화  
	for (i = 0; i < 3; i++)
	{
		sum += grade[i];
	}
	printf("국영수 과목 총 점수 합계는 %d이고, 평균 점수는 %f입니다.\n", sum, (double)(sum / 3));
}
*/

//포인터의 기본개념과 기본활용
/*
int main() {
	int n = 100;
	int*ptr = & n; 
	printf("%d\n", *ptr);
	printf("%#x\n", ptr);
	printf("%#x\n", ptr+1);

}
*/



//값에 의한 전달 VS 참조에 의한 전달
/*
void local(int);
int main(void)
{
	int var = 10;
	printf("변수 var의 초깃값은 %d입니다.\n", var);
	local(var);
	//로컬에서 매개변수로 받는 var은 변수의 일반명칭일 뿐이다. 메모리상에 같은곳을 바라보는 변수가 아니다.
	printf("local() 함수 호출 후 변수 var의 값은 %d입니다.\n", var);
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
	printf("변수 var의 초깃값은 %d입니다.\n", var);
	local(&var);
	//loca에서 매개변수로 받는 var은 지역변수로서, main의 var과 메모리상에 같은곳을 바라보는 변수가 아니다.
	printf("local() 함수 호출 후 변수 var의 값은 %d입니다.\n", var);
	return 0;
}
void local(int* var)
{
	*var += 10;
}
*/

//포인터의 연산 : 포인터의 증가
/*
int main(void)
{
	//아래 값의 모든 포인터에 저장된 초기 주소값은 0x00
	char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;
	printf("포인터 ptr_char가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_char);
	printf("포인터 ptr_int가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_int);
	printf("포인터 ptr_double이 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_double);
	printf("포인터 ptr_char가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_char);
	printf("포인터 ptr_int가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_int);
	printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_double);
}
*/

//포인터끼리의 연산
/*
int main(void)
{
	int num01 = 10;
	int num02 = 20;
	int* ptr_num01 = &num01;
	int* ptr_num02 = &num02;
	if (ptr_num01 != ptr_num02) // 포인터끼리의 비교 연산
	{
		printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
		printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num02);
		printf("포인터 ptr_num01과 ptr_num02는 현재 다른 주소를 가리키고 있습니다.\n\n");
		ptr_num02 = ptr_num01; // 포인터끼리의 대입 연산
	}
	printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
	printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num02);
	if (ptr_num01 == ptr_num02) // 포인터끼리의 비교 연산
	{
		printf("포인터 ptr_num01과 ptr_num02는 현재 같은 주소를 가리키고 있습니다.\n");
	}
}
*/
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
}
*/

//배열과 포인터의 관계를 이용한 활용
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
//매개변수를 받으려면 위와 같이 전달받고, 배열처럼 인덱싱을 편하게 사용할 수 있습니다.
//더 간편한 방법으로는 int(*pArr)[4]를 int pArr[][4]로 바꿔줘도 실행이 가능합니다.왜냐면* pArr은 pArr[]과 거의 같은 의미이기 때문입니다.
//https://reakwon.tistory.com/33 참고