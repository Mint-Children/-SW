// 7. 사용자로부터 3개의 정수를 읽어 들인 후에 if-else문을 사용하여 가장 작은 값을 결정하는 프로그램을 작성하라.(5점)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, z;
	int min = 0;

	printf("정수 3개를 입력하시오 : ");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x > y) 
		min = y;
	else
		min = x;

	if (min > z)
		min = z;

	printf("가장 작은 정수는 %d입니다.", min);
	return 0;
}	