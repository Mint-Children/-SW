#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int time, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð� ����): ");
	scanf("%d %d", &time, &age);

	if (time <= 17) {
		if (3 <= age <= 12 || age > 65)
			printf("����� 25,000�� �Դϴ�.");
		else
			printf("����� 34,000�� �Դϴ�.");
	}
	else
		printf("����� 10,000�� �Դϴ�.");
	
	return 0;
}