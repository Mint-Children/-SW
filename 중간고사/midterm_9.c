// 9. ���� ���α׷��� ������ �ϴ� ���α׷��ΰ�? ���� ��� ��� ����� ��� �Ǵ°�?(4��)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, tot = 0;
	do {
		printf("���� �Է�:");
		scanf("%d", &num);
		tot += num;
	} while (num != 0);
	printf("total = %d\n", tot);

	return 0;
}

// �Է� ���� 0�� �ƴ� �� ���� ������ �Է¹޾� ��� ���� ���ϴ� ���α׷��̴�.
// ex) 5 6 2 1 -4 5   ��� ��� : 15