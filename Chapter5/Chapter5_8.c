#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double radius;
	const double pie = 3.141592;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	printf("ǥ������ %.2lf�Դϴ�.\n", 4 * pie * (radius * radius));
	printf("ü���� %.2lf�Դϴ�.", 4.0 / 3.0 * pie * (radius * radius * radius));

	return 0;
}