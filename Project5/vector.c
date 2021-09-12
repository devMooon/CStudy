/*#include <stdio.h>

typedef struct vector {
	float x;
	float y;
}VECTOR;

void get_vector_sum(VECTOR a, VECTOR b, VECTOR* const result);

int main(void) 
{
	VECTOR a = { 2.0, 3.0 };
	VECTOR b = { 5.0, 6.0 };

	VECTOR result;
		
	get_vector_sum(a, b, &result);
	printf("벡터의 합은 (%f, %f) 입니다.", result.x, result.y);

	return 0;
}

void get_vector_sum(VECTOR a, VECTOR b, VECTOR* const result)
{
	result->x = a.x + b.x;
	result->y = a.y + b.y;
}*/