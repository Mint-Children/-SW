#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double num;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &num);

	printf("�Ǽ��������δ� %f�Դϴ�.\n", num);
	printf("�����������δ� %e�Դϴ�.", num);

	return 0;
}