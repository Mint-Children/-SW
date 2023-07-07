/* 5 x 5 배열 만들고 루프를 25번 돌려서 r, c를 랜덤하게 받아서 데이터를 넣을때 마다 1씩 증가, 0 1 2 3... 24 
   데이터가 이미 있다면, 카운터는 늘리되 값은 바뀌지 않는다. 모든 배열에 값이 다 들어갈때 까지 루프를 증가 시키면서 확인 30 40 50 60 결국 마지막 값은 24*/

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
	printf("반복한 횟수 : %d\n", count);
}


int main() {
	int image[SIZE][SIZE];

	print_image(image);
	count_image(image);
	print_image(image);

	return 0;
}