#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int income;
	double years;

	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%d", &income);

	years = 100000.0 / income;

	printf("10���� �����µ� �ɸ��� �ð�(����: ��): %.2lf", years);

	return 0;
}