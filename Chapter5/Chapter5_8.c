#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double radius;
	const double pie = 3.141592;

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &radius);

	printf("표면적은 %.2lf입니다.\n", 4 * pie * (radius * radius));
	printf("체적은 %.2lf입니다.", 4.0 / 3.0 * pie * (radius * radius * radius));

	return 0;
}