/* 
  01. ������ ���� ������ ����� �ϴ� �Լ����� �ۼ��ϰ�, ����ڷκ��� ������ ���� �Է¹��� �Ŀ� �ۼ��� �Լ����� �׽�Ʈ�Ͽ�����.
  (a) �־��� ������ ¦���̸� 1�� ��ȯ�ϰ� Ȧ���̸� 0�� ��ȯ�ϴ� �Լ� int even(int n)
  (b) �־��� ������ ���밪�� ���ϴ� �Լ� int absolute(int n)
  (c) �־��� ������ �����̸� -1��, ����̸� 1�� 0�̸� 0�� ��ȯ�ϴ� �Լ� int sign(int n) 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n) {
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absoulte(int n) {
	if (n < 0) 
		return n * -1;
	else
		return n;
}

int sign(int n) {
	if (n < 0)
		return -1;
	else if (n > 0)
		return 1;
	else
		return 0;

}

int main() {
	int n;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &n);

	printf("even()�� ���: %d\n", even(n));
	printf("absolute()�� ���: %d\n", absoulte(n));
	printf("sign()�� ���: %d\n", sign(n));

	return 0;
}