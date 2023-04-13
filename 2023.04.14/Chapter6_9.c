/* 다음과 같이 정의되는 함수의 함수값을 계산하여보자.
   사용자로부터 x값을 입력받아서 함수값을 계산하여 화면에 출력한다. x는 실수이다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x;
	
	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	if (x <= 0) {
		double fx = ((x * x) - (9 * x) + 2);
		printf("f(x)의 값은 %.2lf입니다.", fx);
	}
	else if (x > 0) {
		double fx = ((7 * x) + 2);
		printf("f(x)의 값은 %.2lf입니다.", fx);
	}

	return 0;
}