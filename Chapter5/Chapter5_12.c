#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned int result = 0;
	char one, two, three, four;

	printf("ù ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &one);

	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &two);

	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &three);

	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &four);

	result |= one;
	result |= (two << 8);
	result |= (three << 16);
	result |= (four << 24);

	printf("�����: %x", result);

	return 0;
}