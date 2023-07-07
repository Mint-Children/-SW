#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu();
void encrypt(char cipher[], int shift);
void decrypt(char cipher[], int shift);

int main() {
	char cipher[50];
	int shift = 3;
	int num;

	menu();

	scanf("%d", &num);
	getchar();

	printf("문자열을 입력하시오: ");
	gets_s(cipher, sizeof(cipher), stdin);

	if (num == 1)
		encrypt(cipher, shift);
	else if (num == 2)
		decrypt(cipher, shift);

	return 0;
}

void menu() {
	int num;
	printf("---------------------------------\n");
	printf("메뉴를 선택하세요: \n");
	printf("1 - 암호화\n");
	printf("2 - 복호화\n");
	printf("---------------------------------\n");
}

void encrypt(char cipher[], int shift) {
	int i = 0;

	while (cipher[i] != '\0') {
		if (cipher[i] >= 'A' && cipher[i] <= 'z') {
			cipher[i] += shift;
			if (cipher[i] >= 'z')
				cipher[i] -= 26;
		}
		i++;
	}
	printf("암호화된 문자열: %s \n");
}

void decrypt(char cipher[], int shift) {
	int i = 0;

	while (cipher[i] != '\0') {
		if (cipher[i] >= 'A' && cipher[i] <= 'z') {
			cipher[i] -= shift;
			if (cipher[i] <= 'A')
				cipher[i] += 26;
		}
		i++;
	}
	printf("복호화된 문자열: %s \n");
}
