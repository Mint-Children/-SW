#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	printf("십의 자리: %d\n", num / 10);
	printf("일의 자리: %d", num % 10);

	return 0;
}