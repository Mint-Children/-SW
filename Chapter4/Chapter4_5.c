#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double pyeong;
	const double SQMETER_PER_PYEONG = 3.3058;

	printf("평을 입력하세요: ");
	scanf_s("%lf", &pyeong);

	printf("%lf평방미터입니다.", pyeong * SQMETER_PER_PYEONG);

	return 0;
}