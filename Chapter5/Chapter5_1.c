#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	
	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	printf("��: %d\n", x / y);
	printf("������: %d", x % y);

	return 0;
}