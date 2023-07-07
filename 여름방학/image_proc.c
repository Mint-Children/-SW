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

void brighten_image(int image[SIZE][SIZE])
{
	int r, c;
	int* p = image;

	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			if (r == c || r + c == 4) 
				*p = 0;
			else 
				*p = -1;

			p++;
		}
	}
}

void random_image(int image[SIZE][SIZE]) {
	/* ������ 16�� ������ [rand][rand] ��ġ�� 0�̸� -1��, 1�̸� 99�� �Ҵ��մϴ�. */
	srand(time(NULL));
	int* p;
	for (int i = 0; i < 16; i++) {
		int r = rand() % SIZE;
		int c = rand() % SIZE;
		p = &image[r][c];
		if (*p == -1)
			*p = 99;
	}
}

void count_image(int image[SIZE][SIZE]) {

	int count = 0, index = 0;
	int* p = NULL;

	int r = rand() % SIZE;
	int c = rand() % SIZE;

	*p = &image[r][c];
	
	while (index != 24) {
		count++;

		if (*p == -1) {
			*p = index;
			index++;
		}
	}
	printf("�ݺ��� Ƚ�� : %d", count);
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			printf("%02d ", image[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}


	int main() {
		int image[SIZE][SIZE] = {
			{ -1, -1, -1, -1, -1},
			{ -1, -1, -1, -1, -1},
			{ -1, -1, -1, -1, -1},
			{ -1, -1, -1, -1, -1},
			{ -1, -1, -1, -1, -1} };

		print_image(image);
		brighten_image(image);
		count_image(image);
		print_image(image);

		return 0;
	}