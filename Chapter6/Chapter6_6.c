#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main() {
	char word;

	printf("���ڸ� �Է��Ͻÿ�: ");
	
	scanf_s("%c", &word);
	getchar();

	switch (word)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("�����Դϴ�.");
		break;
	default:
		printf("�����Դϴ�.");
		break;
	}

	return 0;
}