/* 5. ����ڰ� �Է��� Ư���� ������ �ڸ����� �ݴ�� ����ϴ� ���α׷��� �ۼ��϶�. ���� ��� ����ڰ� ���� 1206
      �� �Է��Ͽ��ٸ� 6021�� ��µǾ�� �Ѵ�. do ~ while���� ����Ͽ� ���� */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num = 0, half = 0;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    do {
        half = num % 10;
        num = num / 10;
        printf("%d", half);
    } while (num != 0);

    return 0;
    
}