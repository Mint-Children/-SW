#include <stdio.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student s;

	s[0].number = 20230001;
	strcpy(s[0].name, "ȫ�浿");
	s[0].grade = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2lf\n", s.grade);

	return 0;
}