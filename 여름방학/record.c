/*2���� �迭�� �⸻ 50 �߰� 30 ���� 20 ������ ���� �� ��� ���ϱ� 1���� �迭 �� ���� �� ������ �����ؼ� �������� ���� �� �����˻����� 2���� �迭�� ��� �ű��
  ���� ��� = 2���� �迭 ��� ���*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#define ROW 20
#define COL 6

void input_score(int score[ROW][COL])
{
    int count = 1;

    for (int i = 0; i < ROW; i++)
    {
        score[i][0] = count;
        score[i][1] = rand() % 50;
        score[i][2] = rand() % 30;
        score[i][3] = rand() % 20;
        score[i][4] = score[i][0] + score[i][1] + score[i][2];

        count++;
    }
}

void record(int score[ROW][COL])
{
    int grade[20];
    int temp, max;

    for (int i = 0; i < ROW; i++)
    {
        grade[i] = score[i][4];
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
                if (score[j][4] == grade[i])
                    score[j][5] = equal_grade;
        }
    }
}


void print_score(int score[ROW][COL])
{

    printf("��ȣ\t�߰�\t�⸻\t����\t����\t���\n");

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d\t",score[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    srand((unsigned)time(NULL));
    int num = 1;
    int score[ROW][COL] = { 0 };
    input_score(score);
    record(score);
    print_score(score);

    return 0;
}
