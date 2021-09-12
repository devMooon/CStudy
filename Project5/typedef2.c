/*#include <stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;

void translate(POINT p, POINT delta, POINT* result);

int main(void)
{
	POINT p = { 2, 3 };
	POINT delta = { 10, 10 };
	POINT result;

	translate(p, delta, &result);
	printf("새로운 점의 좌표는 (%d, %d) 입니다.", result.x, result.y);

	return 0;
}

void translate(POINT p, POINT delta, POINT* result)
{
	result->x = p.x + delta.x;
	result->y = p.y + delta.y;
}*/