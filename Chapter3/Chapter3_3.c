#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double bottom, height, area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf("%lf", &bottom);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf("%lf", &height);

	area = bottom * height / 2;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %.2lf", area);

	return 0;
}