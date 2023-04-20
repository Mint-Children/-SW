/* 피보나치 수열은 다음과 같이 정의되는 수열이다.
   f0 = 0
   f1 = 1
   fi + 1 = fi+fi-1 (f or i = 1,2,..)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x = 0, y = 1, z = 0, n;
	printf("항의 갯수를 입력하시오: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d ", x);
		z = x + y;
		x = y;
		y = z;
	}

	return 0;
}