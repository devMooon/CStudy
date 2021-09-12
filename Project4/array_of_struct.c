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
		printf("학번을 입력하세요. : ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하세요. : ");
		scanf("%s", list[i].name); //name은 배열 이름이기 때문에 시작 주소값을 가리킴
		printf("성적을 입력하세요. : ");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("학번 : %d\n", list[i].number);
		printf("이름 : %s\n", list[i].name);
		printf("성적 : %g\n", list[i].grade);
	}
	return 0;
}