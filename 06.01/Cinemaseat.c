#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Size 20

int main() {
    char ans1;
    int seat_ans, seat1, seat2;
    int seats[Size] = { 0 };

    while (1) {
        start:
        printf("좌석을 예약하시겠습니까? (Y or N) \n");
        scanf(" %c", &ans1);

        if (ans1 == 'N') {
            break;
        }
        printf("----------------------------------\n");
        printf("   1  2  3  4  5  6  7  8  9  10\n");
        printf("   11 12 13 14 15 16 17 18 19 20\n");
        printf("----------------------------------\n");

        for (int i = 0; i < 9; i++)
            printf("  %d", seats[i]);
        printf("\n");
        for (int i = 10; i < 19; i++)
            printf("  %d", seats[i]);
        printf("\n");
        printf("좌석을 몇 개 예약하시겠습니까? (1개 또는 2개)\n");
        scanf("%d", &seat_ans);

        if (seat_ans == 1) {
            printf("몇 번째 좌석을 예약하시겠습니까?");
            scanf("%d", &seat1);
            if (seats[seat1 - 1] == 0) {
                seats[seat1 - 1] = 1;
                printf("예약되었습니다.\n");
            }
            else {
                printf("이미 예약된 좌석입니다.\n");
                goto start;
            }
        }
        if (seat_ans == 2) {
            printf("몇 번째 좌석을 예약하시겠습니까? (공백을 넣어 2개를 입력해주세요.)");
            scanf_s("%d %d", &seat1, &seat2);
            if (seats[seat1 - 1] == 0 && seats[seat2 - 1] == 0) {
                seats[seat1 - 1] = 1;
                seats[seat2 - 1] = 1;
                printf("예약되었습니다.\n");
            }
            else if (seats[seat1 - 1] == 1 || seats[seat2 - 1] == 1) {
                if (seats[seat1 - 1] == 1) {
                    printf("%d는 이미 예약된 좌석입니다.", seats[seat1 - 1]);
                    goto start;
                }
                else if (seats[seat2 - 1] == 1) {
                    printf("%d는 이미 예약된 좌석입니다.", seats[seat2 - 1]);
                    goto start;
                }
            }
        }
    }
    return 0;
}
