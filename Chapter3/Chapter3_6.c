#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double weight_on_earth, weight_on_moon;

	printf("�����Ը� �Է��Ͻÿ�(����: kg): ");
	scanf("%lf", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;
	printf("�޿����� �����Դ� %.2lfkg�Դϴ�.", weight_on_moon);

	return 0;
}