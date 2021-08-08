#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int num;
	double height;
	double weight;
}studentT;

int main(void) {

	studentT arr[10];
	int n;

	printf("학생 수? : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("학생%d : ", i + 1);
		scanf("%lf %lf", &arr[i].height, &arr[i].weight);
		arr[i].num = i + 1;
	}

	double averageHeight;
	double averageWeight;

	//키평균구하기
	double sum=0;
	for (int i = 0; i < n; i++) {
		sum += arr[i].height;
	} averageHeight = sum / n;

	//몸무게평균구하기
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i].weight;
	} averageWeight = sum / n;

	printf("%0.1lf %0.1lf\n", averageHeight, averageWeight);

	//출력 결정

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i].num);
		if ((arr[i].height >= averageHeight) && (arr[i].weight >= averageWeight))
			printf("supper");
		else if ((arr[i].height >= averageHeight) || (arr[i].weight >= averageWeight))
			printf("average");
		else
			printf("below");
		printf("\n");
	}
}