#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char word;
	
	printf("문자를 입력하시오: ");
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