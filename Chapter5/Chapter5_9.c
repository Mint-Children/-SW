#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double AC, AE, BC, DE;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &BC);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &AC);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &AE);

	DE = (AE / AC) * BC;

	printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.", DE);

	return 0;

}