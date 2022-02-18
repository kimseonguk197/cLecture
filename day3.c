#include <stdio.h>	
//제어문 알고리즘 - 최대값

/*
int main(void) {
	int lista[9] = { 93, 45, 21, 30, 20, 94, 66, 71, 45 };
	int max = lista[0], min = lista[0];
	int lenga = sizeof(lista) / sizeof(int);
	//printf("lenga의 값은? %d", lenga);
	for (int i = 0; i < lenga; i++) {
		if (lista[i] > max) {
			max = lista[i];
		}
		if (lista[i] < min) {
			min = lista[i];
		}
	}
	printf("최대값은 %d, 최소값은 %d", max, min);
}
*/



//제어문 알고리즘 - 선택정렬 알고리즘
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


//함수 - sum함수 만들어보기
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



//함수 - bigNum함수 만들어보기
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

//함수의 원형선언
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


//재귀함수 예제
//for문 사용시
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
//재귀함수 사용시
/*
int Sum(int n)
{
	if (n == 1)           // n이 1이면, 그냥 1을 반환함.
	{
		return 1;
	}
	return n + Sum(n - 1); // n이 1이 아니면, n을 1부터 (n-1)까지의 합과 더한 값을 반환함.
}
*/

//재귀함수 실제 사용예시 >> 참고만
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
		return 0; // 디렉토리면 0 반환
	else
		return 1; // 그밖의 경우는 "존재하는 파일"이기에 1 반환

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

		check = isFileOrDir();    //파일인지 디렉토리 인지 식별

		if (check == 0 && fd.name[0] != '.')
		{
			FileSearch(file_pt);    //하위 디렉토리 검색 재귀함수
		}
		else if (check == 1 && fd.size != 0 && fd.name[0] != '.')
		{
			printf("파일명 : %s, 크기:%d\n", file_pt, fd.size);
		}
	}
	_findclose(handle);
}

int main()
{
	char file_path[_MAX_PATH] = "c:";    //C:\ 경로 탐색

	FileSearch(file_path);

	return 0;
}
*/

//변수의  - 지역변수
/*
void local(void)
{
	int var = 20;
	printf("local() 함수 내의 지역 변수 var의 값은 %d입니다.\n", var);
}
int main(void)
{
	int i = 5;
	int var = 10;
	printf("main() 함수 내의 지역 변수 var의 값은 %d입니다.\n", var);
	if (i < 10)
	{
		local();
		int var = 30;
		printf("if 문 내의 지역 변수 var의 값은 %d입니다.\n", var);
	}
	printf("현재 지역 변수 var의 값은 %d입니다.\n", var);
	return 0;
}
*/

//변수의 유효범위 - for문
/*
int main(void)
{
	for (int i = 0; i < 10; i++) {
		printf("%d", i);
	}
	printf("%d", i);
}*/




//변수의 유효범위 - 전역변수
/*
void local(void);
int var; // 전역 변수 선언    
int main(void)
{
	printf("전역 변수 var의 초깃값은 %d입니다.\n", var);
	int i = 5;
	int var = 10; // 지역 변수 선언
	printf("main() 함수 내의 지역 변수 var의 값은 %d입니다.\n", var);
	if (i < 10)
	{
		local();
		printf("현재 변수 var의 값은 %d입니다.\n", var); //
	}
	printf("더 이상 main() 함수에서는 전역 변수 var에 접근할 수가 없습니다.\n");
	return 0;

}

void local(void)
{
	var = 20; // 전역 변수의 값 변경
	printf("local() 함수 내에서 접근한 전역 변수 var의 값은 %d입니다.\n", var);
}*/