#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	int i;

	while (1) {
		printf("\n���ڿ��� �Է��Ͻÿ�: %s \n", answer);
		printf("���ڸ� �����Ͻÿ�: ");
		ch = _getch();

		// ���� ��
		for (i = 0; solution[i] != NULL; i++) {
			//���߸� ���ڸ� ���̰� ��
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break;
	}
	return 0;
}