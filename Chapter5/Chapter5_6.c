#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int x, y;
	
	x = (1.0 - 0.9) == 0.1;
	y = 0.1;
	printf("(1.0-0.9)==0.1 은 %d입니다.", fabs(x - y) < 0.000001);

	return 0;
}