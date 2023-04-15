#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main() {
	char word;

	printf("문자를 입력하시오: ");
	
	scanf_s("%c", &word);
	getchar();

	switch (word)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("모음입니다.");
		break;
	default:
		printf("자음입니다.");
		break;
	}

	return 0;
}