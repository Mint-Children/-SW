#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, y;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	printf("%.2f %.2f %.2f %.2f", x + y, x - y, x * y, x / y);

	return 0;
}