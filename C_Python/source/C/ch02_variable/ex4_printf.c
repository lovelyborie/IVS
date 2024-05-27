#include <stdio.h>
/* 서식지정자 : %d,%f,%.3lf, %c(문자1개),%s(문자0개 이상)
*/
int main(void) {
	int num1 = 10; int num2 = 11;
	printf("두수의 합 = %d\n", num1 + num2);
	//정수형(4byte)과 정수형(4byte) 사칙연산 결과는 정수형(4byte)
	printf("두수의 평균 = %lf\n", (num1 + num2) / 2.0); //2와 2.0의차이
}