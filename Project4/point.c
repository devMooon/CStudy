//�� �� ������ ���� ���ϱ�. �� ���� ��ǥ (x, y)��
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};
struct coordinate {
	struct point num;
};

double calDistance(struct point A, struct point B);

int main(void)
{
	struct coordinate a, b;
	printf("���� ��ǥ�� �Է��ϼ���.(x y) : ");
	scanf("%d %d", &a.num.x, &a.num.y);
	printf("���� ��ǥ�� �Է��ϼ���.(x y) : ");
	scanf("%d %d", &b.num.x, &b.num.y);

	double distance = calDistance(a.num, b.num);

	printf("�Ÿ��� %lf �Դϴ�.", distance);

	return 0;
}

double calDistance(struct point A, struct point B)
{
	return sqrt(((B.x - A.x) * (B.x - A.x)) + ((B.y - A.y) * (B.y - A.y)));
}*/