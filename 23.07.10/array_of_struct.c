#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main() {
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", &list[i].name);
		printf("����(�Ǽ�)�� �Է��Ͻÿ�: ");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("�й�: %d �̸�: %s ����: %.2lf\n", list[i].number, list[i].name, list[i].grade);
		printf("\n");
	}

	return 0;
}