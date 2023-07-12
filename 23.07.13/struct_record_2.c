/*2차원 배열로 기말 50 중간 30 과제 20 총점을 구한 후 등수 구하기 1차원 배열 을 만든 후 총점을 복사해서 내림차순 정렬 후 순차검색으로 2차원 배열에 등수 매기기
  최종 출력 = 2차원 배열 등수 출력*/

  /* 전에 만들었던 성적표 프로그램에 배열을 구조체로 만들것
     중간 40 기말 30 과제 30 총점 등수
     점수세팅 함수, 총점 함수, 등수 함수, 출력 함수
     학번 이름 중간 기말 과제 총점 등수*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#define ROW 20
#define COL 6

struct student {
    int number;
    char name[3];
    int midterm;
    int final;
    int assignment;
    int sum;
    int rank;
};

void input_score(struct student s[])
{
    int count = 1;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < 3; j++) {
            s[i].name[j] = rand() % 26 + 65;
        }
        s[i].name[3] = '\0';

        s[i].number = 202032001 + i;
        s[i].midterm = rand() % 40;
        s[i].final = rand() % 30;
        s[i].assignment = rand() % 30;
        s[i].sum = s[i].midterm + s[i].final + s[i].assignment;

        count++;
    }
}

void record(struct student s[])
{
    int grade[20];
    int temp, max;

    for (int i = 0; i < ROW; i++)
    {
        grade[i] = s[i].sum;
    }

    for (int i = 0; i < ROW - 1; i++)
    {
        max = i;

        for (int j = i + 1; j < ROW; j++)
            if (grade[j] > grade[max])
                max = j;

        temp = grade[i];
        grade[i] = grade[max];
        grade[max] = temp;
    }

    temp = 0;
    int equal_grade = 1;
    for (int i = 0; i < ROW; i++)
    {
        temp++;
        for (int j = 0; j < ROW; j++) {
            if (i != 0)
            {
                if (grade[i] != grade[i - 1])
                    equal_grade = temp;
            }
            if (s[j].sum == grade[i])
                s[j].rank = equal_grade;
        }
    }
}


void print_score(struct student s[])
{

    printf("학번\t\t이름\t중간\t기말\t과제\t총점\t등수\n");

    for (int i = 0; i < ROW; i++) {
        printf("%ld\t%s\t%d\t%d\t%d\t%d\t%d\n", s[i].number, s[i].name, s[i].midterm, s[i].final, s[i].assignment, s[i].sum, s[i].rank);
    }
}

int main() {
    srand((unsigned)time(NULL));
    struct student s[ROW];
    input_score(s);
    record(s);
    print_score(s);

    return 0;
}