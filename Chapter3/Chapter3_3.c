#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double bottom, height, area;

	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &bottom);
	printf("�ﰢ���� ����: ");
	scanf("%lf", &height);

	area = bottom * height / 2;
	printf("�ﰢ���� ����: %.2lf", area);

	return 0;
}