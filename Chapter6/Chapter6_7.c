#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int height, weight;
	int standard;

	printf("Ű�� ü���� �Է��Ͻÿ�: ");
	scanf("%d %d", &height, &weight);

	standard = (height - 100) * 0.9;

	if (standard > weight)
		printf("��ü���Դϴ�.");
	else if (standard == weight)
		printf("ǥ��ü���Դϴ�.");
	else
		printf("��ü���Դϴ�.");

	return 0;
}