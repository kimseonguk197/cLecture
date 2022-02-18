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
	char c = 'a';
	char* ptrc = &c;
	printf("%d\n", *ptr);
	printf("%#x\n", ptr);
	printf("%#x\n", ptr+1);
	printf("%#x\n", &ptr);
	printf("%#x\n", *&ptr);
	//printf("%d\n", sizeof(ptrc));

}*/



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
/*
//포인터의 포인터 접근
int main() {
	int num = 10;              // 변수 선언
	int* ptr_num = &num;       // 포인터 선언
	int** pptr_num = &ptr_num; // 포인터의 포인터 선언
	printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);
	printf("포인터  ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *ptr_num);
	printf("포인터의 포인터 pptr_num가 가리키는 주소에 저장된 포인터가 가리키는 주소에 저장된 값은 %d입니다.\n", **pptr_num);
}
*/
