// 10. ���� ���α׷��� ��� �����?(5��)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0x10;
	for (; i; i >>= 1)
		printf("hello");

	return 0;
}

// ��� ��� : hellohellohellohellohello
