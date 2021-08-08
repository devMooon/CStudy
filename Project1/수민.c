/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_max(int*);
int get_min(int*);

int main(void) {
	int arr[2];

	printf("첫번째 정수를 입력하세요. : ");
	scanf("%d", &arr[0]);
	printf("두번째 정수를 입력하세요. : ");
	scanf("%d", &arr[1]);

	int max = get_max(arr);
	int min = get_min(arr);

	printf("둘 중 큰 값은 %d, 작은 값은 %d입니다.", max, min);

	return 0;
}

int get_max(int*a) 
{
	if (*a > *(a + 1))
		return *a;
	else
		return *(a + 1);
}

int get_min(int*a)
{
	if (*a < *(a + 1))
		return *a;
	else
		return *(a + 1);
}*/