#include <stdio.h>

typedef struct employee {
	char name[20];
	int num;
	int age;
}Employee;

int main(void)
{
	Employee e[] = { { "������", 1, 21 }, { "������", 2, 22 }, { "�̼���", 3, 22 } };

	for (int i = 0; i < 3; i++) {
		printf("���%d / �̸�:%s, ����:%d\n", e[i].num, e[i].name, e[i].age);
	}
	
	return 0;
}