#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, answer;

	printf("실수릅 입력하시오: ");
	scanf("%lf", &x);

	answer = { 3 * (x * x) + (7 * x) + 11 };

	printf("다항식의 값은 %.2lf", answer);

	return 0;
}