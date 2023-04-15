#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned int)time(NULL));
	
	int user;
	int solution = (rand() % 99 + 1);

	printf("복권 번호를 입력하시오(0에서 99사이): ");
	scanf("%d", &user);

	printf("당첨번호는 %d입니다.\n", solution);
	
	if (user == solution)
		printf("상금은 100만원 입니다!");
	else if ((user / 10 == solution / 10) || (user % 10 == solution % 10))
		printf("상금은 50만원 입니다.");
	else
		printf("상금은 없습니다.");

	return 0;
}