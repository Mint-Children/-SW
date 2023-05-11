#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer() {
	int n;

	printf("정수를 입력하세요.\n");
	scanf_s("%d", &n);
	return n;
}

int find_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int n;
	n = get_integer();

	if (find_prime(n) == 1)
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);
	return 0;
}