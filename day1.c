#include <stdio.h>	

//hello world 출력
/*int main(void) {
	printf("hello world");
	return 0;
}*/

/*
#define TEXT  "Welcome to C Programming!!"  
//define 출력
int main(void) {
	printf(TEXT);
	return 0;
}
}*/


//printf()함수 - 서식지정자 및 이스케이프 
/*
int main(void) {
	printf("%%c를 사용한 결과 : %c\n", 'a');            // 문자
	printf("%%s를 사용한 결과 : %s\n", "즐거운 C언어"); // 문자열  

	printf("%%d를 사용한 결과 : %d\n", 123);            // 정수
	printf("%%f를 사용한 결과 : %f\n", 0.123456);  //실수
	printf("저장된 정수는 %d이며, 저장된 문자열은 %s입니다.\n", 123, "C언어");  //여러개 지정


}
*/

//scanf()함수 - & 주소연산자를 통해 num변수에 입력값을 담는다.
/*
int main(void)

{
	int num01, num02;
	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &num01);

	printf("두 번째 정수를 입력하세요 : ");
	scanf("%d", &num02);

	printf("입력하신 두 정수의 합은 %d입니다.\n", num01 + num02);
	return 0;

}
*/




//변수와 메모리
/*
int main(void) {

	char a = 'a';
	printf("a의 메모리상의 주소는? %d\n", &a);
	printf("a의 크기는? %d\n", sizeof(a));
}
*/

//변수의 주요 타입
/*
int main(void) {
	//(실수형을 int형에 담으면) >> 손실발생
	int num01 = 3.14152;
	printf("변수는 %d입니다.\n", num01);


	//(int형을 float형에 담으면) >> 손실될게 없다.
	float num01 = 314;
	printf("변수는 %f입니다.\n", num01);

	char ch = 'a';
	printf("변수 ch에 저장된 값은 %c입니다.\n", ch);
	printf("변수 ch에 저장된 값은 %d입니다.\n", ch);

}*/

//연산자 - 산술연산자
/*
int main(void) {
	int num01 = 10;
	int num02 = 4;

	printf("+ 연산자에 의한 결괏값은 %d입니다.\n", num01 + num02);
	printf("- 연산자에 의한 결괏값은 %d입니다.\n", num01 - num02);
	printf("* 연산자에 의한 결괏값은 %d입니다.\n", num01 * num02);
	printf("/ 연산자에 의한 결괏값은 %d입니다.\n", num01 / num02);
	printf("% 연산자에 의한 결괏값은 %d입니다.\n", num01 % num02);

}
*/
//대입연산자
/*
int main(void) {

	int num01 = 7;
	int num02 = 7;
	int num03 = 7;

	num01 = num01 - 5;
	num02 -= 5;
	num03 = -5;

	printf("- 연산자에 의한 결괏값은 %d입니다.\n", num01);
	printf("-= 연산자에 의한 결괏값은 %d입니다.\n", num02);
	printf("=- 연산자에 의한 결괏값은 %d입니다.\n", num03);

}
*/

//증감연산자
/*
int main(void) {

int num01 = 7;
int num02 = 7;
int result01, result02;

result01 = (++num01) - 5;
result02 = (num02++) - 5;

printf("전위 증가 연산자에 의한 결괏값은 %d이고, 변수의 값은 %d로 변했습니다.\n", result01, num01);
printf("후위 증가 연산자에 의한 결괏값은 %d이고, 변수의 값은 %d로 변했습니다.\n", result02, num02);

}*/

//비교연산자
/*
int main(void) {
	int num01 = 3;
	int num02 = 7;



	printf("== 연산자에 의한 결괏값은 %d입니다.\n", num01 == num02);
	printf("<= 연산자에 의한 결괏값은 %d입니다.\n", num01 <= num02);
}
*/

//논리연산자
/*
int main(void) {
	int num01 = 3;
	int num02 = -7;
	int result01, result02;

	result01 = (num01 > 0) && (num01 < 5);
	result02 = (num02 < 0) || (num02 > 10);

	printf("&& 연산자에 의한 결괏값은 %d입니다.\n", result01);
	printf("|| 연산자에 의한 결괏값은 %d입니다.\n", result02);
	printf(" ! 연산자에 의한 결괏값은 %d입니다.\n", !result02);
}
*/

