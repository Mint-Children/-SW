#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	double mile, meter;

	printf("마일을 입력하세요: ");
	scanf_s("%lf", &mile);

	meter = mile * 1609;

	printf("%.1lf 마일은 %.2lf미터입니다.", mile, meter);

	return 0;
}