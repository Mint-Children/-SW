#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 10, y = 20, temp;

	printf("x = %d y = %d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("x = %d y = %d", x, y);

	return 0;
}