// 8. (x,y)��ǥ�� �Է� �޾Ƽ� ��ǥ�� ���ϴ� ��и��� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.(5��)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;

	printf("x, y ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0)
			printf("1��и��Դϴ�.");
		else
			printf("4��и��Դϴ�.");
	}

	else if (x < 0) {
		if (y > 0)
			printf("2��и��Դϴ�.");
		else
			printf("3��и��Դϴ�.");
	}

	return 0;
}