#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double length, width, height;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &length, &width, &height);

	printf("������ ���Ǵ� %lf�Դϴ�.", length * width * height);

	return 0;
}