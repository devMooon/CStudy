/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct student {
	int number;
	char name[10];
	double grade;
	int num[2];
};
int main(void)
{
	//struct student s = { 20190001, "ȫ�浿", 4.3 };
	struct student s;
	printf("�й��� �Է��ϼ���. : ");
	scanf("%d", &s.number);
	printf("�̸��� �Է��ϼ���. : ");
	scanf("%s", s.name); //name�� �迭 �̸��̱� ������ ���� �ּҰ��� ����Ŵ
	printf("������ �Է��ϼ���. : ");
	scanf("%lf", &s.grade);

	printf("\n");

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %g\n", s.grade);

	return 0;
}*/