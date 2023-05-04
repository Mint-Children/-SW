// 9. 다음 프로그램은 무엇을 하는 프로그램인가? 예를 들어 출력 결과는 어떻게 되는가?(4점)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, tot = 0;
	do {
		printf("정수 입력:");
		scanf("%d", &num);
		tot += num;
	} while (num != 0);
	printf("total = %d\n", tot);

	return 0;
}

// 입력 값이 0이 아닐 때 까지 정수를 입력받아 모든 값을 더하는 프로그램이다.
// ex) 5 6 2 1 -4 5   출력 결과 : 15