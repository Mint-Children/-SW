/* 1. ����ڰ� �Է��� ������ ��� ����� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0)
			printf("%d ", i);
	}

	return 0;
}
