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
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", &list[i].name);
		printf("학점(실수)를 입력하시오: ");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("학번: %d 이름: %s 학점: %.2lf\n", list[i].number, list[i].name, list[i].grade);
		printf("\n");
	}

	return 0;
}