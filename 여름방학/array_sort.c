#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

void rand_array(int array[SIZE], int check[100]);
void sort_array(int array[SIZE]);
void merge_array(int A[SIZE], int B[SIZE], int C[100]);
void print_array(int A[SIZE], int B[SIZE], int C[100]);
void check_array(int check[100]);

int main() {
	srand((unsigned)time(NULL));

	int A[SIZE];
	int B[SIZE];
	int C[100];
	int check[100];
	check_array(check);
	rand_array(A, check);
	rand_array(B, check);
	sort_array(A);
	sort_array(B);
	merge_array(A, B, C);
	print_array(A, B, C);
}

void rand_array(int array[SIZE], int check[100])
{
	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 100;
		while (check[array[i]] != 0) {
			array[i] = rand() % 100;
		}
		check[array[i]] = 1;
	}
	check_array(check);
}

void sort_array(int array[SIZE])
{
	int least, temp;

	for (int i = 0; i < SIZE; i++) 
	{
		least = i;

		for (int j = i + 1; j < SIZE; j++)
			if (array[j] < array[least])
				least = j;

		temp = array[i];
		array[i] = array[least];
		array[least] = temp;
	}
}

void merge_array(int A[SIZE], int B[SIZE], int C[100])
{
	int i, a, b, c;
	for (a = 0, b = 0, c = 0; a < SIZE && b < SIZE;) {
		if (A[a] < B[b])
			C[c++] = A[a++];
		else if (A[a] > B[b])
			C[c++] = B[b++];
		else {
			C[c++] = A[a++];
			b++;
		}
	}
	for (i = a; i < SIZE; i++)
		C[c++] = A[i];
	for (i = b; i < SIZE; i++)
		C[c++] = B[i];
}

void print_array(int A[SIZE], int B[SIZE], int C[100])
{
	printf("A[] = ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("B[] = ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");
	for (int i = 0; i < 100; i++)
	{
		if(C[i] >= 0)
			printf("C[] = %d ", C[i]);
	}
}

void check_array(int check[100])
{
	for (int i = 0; i < 100; i++)
		check[i] = 0;
}