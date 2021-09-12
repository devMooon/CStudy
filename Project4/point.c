//두 점 사이의 길이 구하기. 한 점의 좌표 (x, y)값
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
	printf("점의 좌표를 입력하세요.(x y) : ");
	scanf("%d %d", &a.num.x, &a.num.y);
	printf("점의 좌표를 입력하세요.(x y) : ");
	scanf("%d %d", &b.num.x, &b.num.y);

	double distance = calDistance(a.num, b.num);

	printf("거리는 %lf 입니다.", distance);

	return 0;
}

double calDistance(struct point A, struct point B)
{
	return sqrt(((B.x - A.x) * (B.x - A.x)) + ((B.y - A.y) * (B.y - A.y)));
}*/