#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, answer;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	answer = { 3 * (x * x) + (7 * x) + 11 };

	printf("���׽��� ���� %.2lf", answer);

	return 0;
}