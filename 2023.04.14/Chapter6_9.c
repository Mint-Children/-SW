/* ������ ���� ���ǵǴ� �Լ��� �Լ����� ����Ͽ�����.
   ����ڷκ��� x���� �Է¹޾Ƽ� �Լ����� ����Ͽ� ȭ�鿡 ����Ѵ�. x�� �Ǽ��̴�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x;
	
	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	if (x <= 0) {
		double fx = ((x * x) - (9 * x) + 2);
		printf("f(x)�� ���� %.2lf�Դϴ�.", fx);
	}
	else if (x > 0) {
		double fx = ((7 * x) + 2);
		printf("f(x)�� ���� %.2lf�Դϴ�.", fx);
	}

	return 0;
}