/* 3. ���� ���н��� ����ϴ� �ڵ带 �ۼ��϶� */

#include <stdio.h>

int main() {
	int sum1 = 0, sum2 = 0;
	// 1
	for (int i = 1; i <= 30; i++) {
		sum1 += (i * i) + 1;
	}
	printf("%d\n", sum1);

	// 2
	for (int i = 10; i <= 30; i++) {
		for (int j = 0; j <= 5; j++) {
			sum2 += i + j;
			
		}
	}
	printf("%d\n", sum2);

	return 0;
}