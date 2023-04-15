#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int cm, ft;
	double inch;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &cm);

	inch = cm / 2.54;
	ft = (int)inch / 12;

	printf("%dcm는 %d피트 %.2f인치입니다.", cm, ft, inch);

	return 0;
}