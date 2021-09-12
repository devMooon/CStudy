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
		printf("학생%d의 이름은? : ", i);
		scanf("%s", &list[i].name);
		printf("학생%d의 학번은? : ", i);
		scanf("%d", &list[i].number);
		printf("학생%d의 학점은? : ", i);
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

	printf("평점이 가장 높은 학생은 (이름: %s, 학번: %d, 평점: %lf) 입니다.", super_stu.name, super_stu.number, super_stu.grade);
}*/