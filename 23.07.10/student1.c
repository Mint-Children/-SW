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
	strcpy(s[0].name, "홍길동");
	s[0].grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.2lf\n", s.grade);

	return 0;
}