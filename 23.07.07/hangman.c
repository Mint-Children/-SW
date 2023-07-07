#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	int i;

	while (1) {
		printf("\n문자열을 입력하시오: %s \n", answer);
		printf("글자를 추측하시오: ");
		ch = _getch();

		// 정답 비교
		for (i = 0; solution[i] != NULL; i++) {
			//맞추면 글자를 보이게 함
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break;
	}
	return 0;
}