#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int height, weight;
	int standard;

	printf("키와 체중을 입력하시오: ");
	scanf("%d %d", &height, &weight);

	standard = (height - 100) * 0.9;

	if (standard > weight)
		printf("저체중입니다.");
	else if (standard == weight)
		printf("표준체중입니다.");
	else
		printf("과체중입니다.");

	return 0;
}