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
	//struct student s = { 20190001, "홍길동", 4.3 };
	struct student s;
	printf("학번을 입력하세요. : ");
	scanf("%d", &s.number);
	printf("이름을 입력하세요. : ");
	scanf("%s", s.name); //name은 배열 이름이기 때문에 시작 주소값을 가리킴
	printf("성적을 입력하세요. : ");
	scanf("%lf", &s.grade);

	printf("\n");

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("성적 : %g\n", s.grade);

	return 0;
}*/