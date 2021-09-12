#include <stdio.h>

typedef struct employee {
	char name[20];
	int num;
	int age;
}Employee;

int main(void)
{
	Employee e[] = { { "문서연", 1, 21 }, { "유수연", 2, 22 }, { "이수민", 3, 22 } };

	for (int i = 0; i < 3; i++) {
		printf("사원%d / 이름:%s, 나이:%d\n", e[i].num, e[i].name, e[i].age);
	}
	
	return 0;
}