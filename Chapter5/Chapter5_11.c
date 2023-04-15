#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>

int main() {
	double distance, angle, r;

	printf("거리를 입력하시오: ");
	scanf("%lf", &distance);

	printf("각도를 입력하시오: ");
	scanf("%lf", &angle);

	r = (360 / angle) * distance / (2 * PI);

	printf("지구의 반지름은 %.2lf입니다.\n", r);

	return 0;

}