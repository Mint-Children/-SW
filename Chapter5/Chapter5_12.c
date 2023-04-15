#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned int result = 0;
	char one, two, three, four;

	printf("첫 번째 문자를 입력하시오: ");
	scanf_s(" %c", &one);

	printf("두 번째 문자를 입력하시오: ");
	scanf_s(" %c", &two);

	printf("세 번째 문자를 입력하시오: ");
	scanf_s(" %c", &three);

	printf("네 번째 문자를 입력하시오: ");
	scanf_s(" %c", &four);

	result |= one;
	result |= (two << 8);
	result |= (three << 16);
	result |= (four << 24);

	printf("결과값: %x", result);

	return 0;
}