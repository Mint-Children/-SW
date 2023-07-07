/* 5 x 5 �迭 ����� ������ 25�� ������ r, c�� �����ϰ� �޾Ƽ� �����͸� ������ ���� 1�� ����, 0 1 2 3... 24 
   �����Ͱ� �̹� �ִٸ�, ī���ʹ� �ø��� ���� �ٲ��� �ʴ´�. ��� �迭�� ���� �� ���� ���� ������ ���� ��Ű�鼭 Ȯ�� 30 40 50 60 �ᱹ ������ ���� 24*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void print_image(int image[SIZE][SIZE])
{
	int r, c;
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			printf("%02d ", image[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}

void count_image(int image[SIZE][SIZE]) {

	srand(time(NULL));

	int count = 0, index = 0;

	while (index != 25) {
		int r = rand() % SIZE;
		int c = rand() % SIZE;

		int* p = &image[r][c];

		if (*p < 0) {
			*p = index;
			index++;
		}
		count++;
	}
	printf("�ݺ��� Ƚ�� : %d\n", count);
}


int main() {
	int image[SIZE][SIZE];

	print_image(image);
	count_image(image);
	print_image(image);

	return 0;
}