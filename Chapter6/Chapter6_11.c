#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char word;
	
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &word);
	getchar();

	if (word == 'R' || word == 'r')
		printf("Rectangle");
	else if (word == 'T' || word == 't')
		printf("Triangle");
	else if (word == 'C' || word == 'c')
		printf("Circle");
	else
		printf("Unknown");

	return 0;
}