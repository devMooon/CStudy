#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student  list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("�й��� �Է��ϼ���. : ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��ϼ���. : ");
		scanf("%s", list[i].name); //name�� �迭 �̸��̱� ������ ���� �ּҰ��� ����Ŵ
		printf("������ �Է��ϼ���. : ");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("�й� : %d\n", list[i].number);
		printf("�̸� : %s\n", list[i].name);
		printf("���� : %g\n", list[i].grade);
	}
	return 0;
}