#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>

int main() {
	double distance, angle, r;

	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &distance);

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &angle);

	r = (360 / angle) * distance / (2 * PI);

	printf("������ �������� %.2lf�Դϴ�.\n", r);

	return 0;

}