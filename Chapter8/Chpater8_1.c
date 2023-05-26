/* 
  01. 다음과 같은 간단한 기능을 하는 함수들을 작성하고, 사용자로부터 임의의 값을 입력받은 후에 작성한 함수들을 테스트하여보자.
  (a) 주어진 정수가 짝수이면 1을 반환하고 홀수이면 0을 반환하는 함수 int even(int n)
  (b) 주어진 정수의 절대값을 구하는 함수 int absolute(int n)
  (c) 주어진 정수가 음수이면 -1을, 양수이면 1을 0이면 0을 반환하는 함수 int sign(int n) 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n) {
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absoulte(int n) {
	if (n < 0) 
		return n * -1;
	else
		return n;
}

int sign(int n) {
	if (n < 0)
		return -1;
	else if (n > 0)
		return 1;
	else
		return 0;

}

int main() {
	int n;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);

	printf("even()의 결과: %d\n", even(n));
	printf("absolute()의 결과: %d\n", absoulte(n));
	printf("sign()의 결과: %d\n", sign(n));

	return 0;
}