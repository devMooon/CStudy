/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_max(int*);
int get_min(int*);

int main(void) {
	int arr[2];

	printf("ù��° ������ �Է��ϼ���. : ");
	scanf("%d", &arr[0]);
	printf("�ι�° ������ �Է��ϼ���. : ");
	scanf("%d", &arr[1]);

	int max = get_max(arr);
	int min = get_min(arr);

	printf("�� �� ū ���� %d, ���� ���� %d�Դϴ�.", max, min);

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