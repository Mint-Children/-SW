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

	printf("첫번째 학생의 학번을 입력하시오: ");
	scanf("%d", s.number);

	printf("첫번째 학생의 이름을 입력하시오: ");
	scanf("%s", s.name);

	printf("첫번째 학생의 학점(실수)를 입력하시오: ");
	scanf("%lf", s.grade);

	printf("첫번째 학생의 학번: %d\n", s.number);
	printf("첫번째 학생의 이름: %s\n", s.name);
	printf("첫번째 학생의 학점: %.2lf\n", s.grade);


	return 0;
}