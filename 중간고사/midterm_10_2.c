// 10. 다음 프로그램의 출력 결과는?(5점)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0x10;
	for (; i; i >>= 1)
		printf("hello");

	return 0;
}

// 출력 결과 : hellohellohellohellohello
