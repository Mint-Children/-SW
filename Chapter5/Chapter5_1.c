#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	
	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &x, &y);

	printf("몫: %d\n", x / y);
	printf("나머지: %d", x % y);

	return 0;
}