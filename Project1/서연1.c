/*#include <stdio.h>
void printArray(int*);

int main(void) {
	int arr[2][3] = { {1, 4, 8}, {4, 5, 6} };

	printArray(arr);

	return 0;
}

void printArray(int *a[][3]) {

	int i;
	int k;

	for (i = 0; i < 2; i++) {
		for (k = 0; k < 3; k++) {
			printf("%d ", *((a + i) + k));
		}
		printf("\n");
	}

}*/