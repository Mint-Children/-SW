// 10. 다음 프로그램의 출력 결과는?(5점)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	for (x = 0; x < 3; x++)
		for (y = 2; y >= 0; y--)
			printf("*");

	return 0;
}

// 출력 결과 : *********