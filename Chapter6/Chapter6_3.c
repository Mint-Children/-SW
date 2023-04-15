/* 컴퓨터와 가위, 바위, 보 게임을 하는 프로그램을 작성하라. 컴퓨터는 사용자에게 알리지 않고 가위, 바위, 보 중에서 임의로 하나를 선택한다.
사용자는 프로그램의 입력 안내 메시지에 따라서, 3개 중에서 하나를 선택하게 된다. 사용자의 선택이 끝나면 컴퓨터는 누가 무엇을 선택하였고 누가 이겼는지,
비겼는지 알려준다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	srand((unsigned int)time(NULL));
	
	int User;
	int Computer = (rand() % 3 + 1);

	printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
	scanf("%d", &User);

	if (Computer == 1)
		printf("컴퓨터는 가위를 선택하였습니다.\n");
	else if (Computer == 2)
		printf("컴퓨터는 바위를 선택하였습니다.\n");
	else if (Computer == 3)
		printf("컴퓨터는 보를 선택하였습니다.\n");
	
	if (User == Computer)
		printf("비겼습니다.\n");
	else if ((User == 1 && Computer == 3) || (User == 2 && Computer == 1) || (User == 3 && Computer == 2))
		printf("사용자가 이겼습니다.\n");
	else if ((User == 1 && Computer == 2) || (User == 2 && Computer == 3) || (User == 3 && Computer == 1))
		printf("사용자가 졌습니다.\n");
	
	return 0;
}