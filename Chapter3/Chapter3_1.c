#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int income;
	double years;

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &income);

	years = 100000.0 / income;

	printf("10억을 모으는데 걸리는 시간(단위: 년): %.2lf", years);

	return 0;
}