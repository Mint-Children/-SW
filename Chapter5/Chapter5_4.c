#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int cm, ft;
	double inch;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &cm);

	inch = cm / 2.54;
	ft = (int)inch / 12;

	printf("%dcm�� %d��Ʈ %.2f��ġ�Դϴ�.", cm, ft, inch);

	return 0;
}