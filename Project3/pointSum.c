#include <stdio.h>
int sum(int* b, int size);

int main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	int total = sum(a, 10);
	printf("%d", total);

	return 0;
}

int sum(int* b, int size)
{
	int i;
	int total = 0;

	for (i = 0; i < size; i++) {
		total += *(b + i);
	}

	return total;
}