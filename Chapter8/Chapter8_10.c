/* 10. ����(random number)�� ��ǻ�͸� �̿��� ���� �ذῡ�� ���� ���ȴ�.
       Ư�� �������� �м��� �ʹ� ������ ��쿡 �ùķ��̼��� ����ϸ� ���� �������� ������ �� �� �ִ�.
       10���� 90������ ������ �������� ��ȯ�ϴ� �Լ� randint()�� �ۼ��ϰ� 10�� ȣ���Ͽ�����.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint() {
    return 10 + rand() % 81;
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        printf("%d ", randint());
        }

    return 0;

}