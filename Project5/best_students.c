#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	int number;
	char name[20];
	double grade;
}STUDENT;

void get_max_stu(STUDENT list[]);

int i;
int size = 3;

/*int main(void)
{
	STUDENT list[3];
	
	for (i = 0; i < size; i++) {
		printf("�л�%d�� �̸���? : ", i);
		scanf("%s", &list[i].name);
		printf("�л�%d�� �й���? : ", i);
		scanf("%d", &list[i].number);
		printf("�л�%d�� ������? : ", i);
		scanf("%lf", &list[i].grade);
	}
	
	get_max_stu(list);

	return 0;
}
void get_max_stu(STUDENT list[])
{
	STUDENT super_stu;
	super_stu = list[0];
	for (i = 0; i < size; i++) {
		if (super_stu.grade < list[i].grade) {
			super_stu = list[i];
		}
	}

	printf("������ ���� ���� �л��� (�̸�: %s, �й�: %d, ����: %lf) �Դϴ�.", super_stu.name, super_stu.number, super_stu.grade);
}*/