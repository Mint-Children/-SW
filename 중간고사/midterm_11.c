// 11. 사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램을 작성하라.(5점)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	printf("약수 : ");

	for (int i = 1; i <= num; i++) {
		if (num % i == 0)
			printf("%d, ", i);
	}

	return 0;
}