/*#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s = { 20200657, "������", 4.5 };
	struct student* p;
	p = &s;

	printf("�й�=%d, �̸�=%s, ����=%lf\n", s.number, s.name, s.grade);
	printf("�й�=%d, �̸�=%s, ����=%lf\n", (*p).number, (*p).name, (*p).grade);
	printf("�й�=%d, �̸�=%s, ����=%lf\n", p->number, p->name, p->grade);

	return 0;
}*/