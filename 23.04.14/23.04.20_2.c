/* ​2. 2와 100사이에 있는 모든 소수(Prime Number)를 찾는 프로그램을 작성하라 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j;
	for (i = 2; i <= 100; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);

	}
	return 0;
}