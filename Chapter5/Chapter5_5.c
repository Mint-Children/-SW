#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("���� �ڸ�: %d\n", num / 10);
	printf("���� �ڸ�: %d", num % 10);

	return 0;
}