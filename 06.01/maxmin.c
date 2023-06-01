#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

int main() {
	int prices[size] = { 0 };
	int min, max;
	int max_index, min_index;

	printf("----------------------------\n");
	printf("1   2   3   4   5   6   7   8   9   10\n");
	printf("----------------------------\n");
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		prices[i] = (rand() % 100 + 1);
		printf("%-3d ", prices[i]);
	}
	printf("\n\n");

	min = prices[0];
	max = prices[0];
	for (int i = 1; i < size; i++) {
		if (prices[i] < min) {
			min = prices[i];
			min_index = i;
		}
		else if (prices[i] > max) {
			max = prices[i];
			max_index = i;
		}
	}
	printf("최소값은 %d이고 %d번째 입니다.\n", min, min_index + 1);
	printf("최대값은 %d이고 %d번째 입니다.\n", max, max_index + 1);

	return 0;
}