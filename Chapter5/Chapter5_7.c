#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, mul;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("2�� ���ϰ� ���� Ƚ��: ");
	scanf("%d", &mul);

	printf("%d << %d�� ��: %d", x, mul, x << mul);

	return 0;
}