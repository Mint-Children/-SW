#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned int)time(NULL));
	
	int user;
	int solution = (rand() % 99 + 1);

	printf("���� ��ȣ�� �Է��Ͻÿ�(0���� 99����): ");
	scanf("%d", &user);

	printf("��÷��ȣ�� %d�Դϴ�.\n", solution);
	
	if (user == solution)
		printf("����� 100���� �Դϴ�!");
	else if ((user / 10 == solution / 10) || (user % 10 == solution % 10))
		printf("����� 50���� �Դϴ�.");
	else
		printf("����� �����ϴ�.");

	return 0;
}