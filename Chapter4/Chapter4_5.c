#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double pyeong;
	const double SQMETER_PER_PYEONG = 3.3058;

	printf("���� �Է��ϼ���: ");
	scanf_s("%lf", &pyeong);

	printf("%lf�������Դϴ�.", pyeong * SQMETER_PER_PYEONG);

	return 0;
}