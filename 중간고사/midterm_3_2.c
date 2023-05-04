// 3. 다음 프로그램의 출력은?

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 100, b = 200, c;
	c = (a == 100 || b > 200);
	printf("%d\n", c);
	return 0;
}

// 결과값 : 1