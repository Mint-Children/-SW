#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student s;

	printf("ù��° �л��� �й��� �Է��Ͻÿ�: ");
	scanf("%d", s.number);

	printf("ù��° �л��� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", s.name);

	printf("ù��° �л��� ����(�Ǽ�)�� �Է��Ͻÿ�: ");
	scanf("%lf", s.grade);

	printf("ù��° �л��� �й�: %d\n", s.number);
	printf("ù��° �л��� �̸�: %s\n", s.name);
	printf("ù��° �л��� ����: %.2lf\n", s.grade);


	return 0;
}