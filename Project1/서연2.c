/*#include <stdio.h>
typedef struct {
	int num;
	char name[20];
	int score1;
	int score2;
	int score3;
	double average;

}studentT;

int main(void) {

	studentT students[3] = { {20070001, "È«±æµ¿1", 4.5, 4.5, 4.3}, { 20070002, "È«±æµ¿2", 4.5, 4.4, 4.2}, { 20070003, "È«±æµ¿3", 4.1, 3.5, 4.3} };

	int i;
	for (i = 0; i < 3; i++) {
		students[i].average = (students[i].score1 + students[i].score2 + students[i].score3) / 3.0;
	}

	for (i=0; i < 3; i++) {
		printf("ÇÐ¹ø = %d ÀÌ¸§ = %s ÇÐÁ¡ = %lf\n", students[i].num, students[i].name, students[i].average);
	}
	
	return 0;
}*/