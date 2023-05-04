// 10. 다음 프로그램의 출력 결과는?(5점)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	for (int i = 0; i < 10; i += 2)
		printf("%d\n", i);
}

/*출력 결과 : 0
			  2
              4
			  6
			  8  */