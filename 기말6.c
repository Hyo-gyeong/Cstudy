#include <stdio.h>
#define MAX 20

typedef struct{
	char name[10];
	int grade, mid, final;
	char mark;
}Student;

void printStudent(Student *a, int *n)
{
	int i = 0; 

	while (i < *n){
		printf("%s %d %d %d %c\n", a[i].name, a[i].grade, a[i].mid, a[i].final, a[i].mark);
		i++;
	}
}
char calculateClassGrade(Student *a, int *n)
{
	if (a[*n].grade == 1){
		if ((a[*n].mid + a[*n].final) > 100)
			a[*n].mark = 'A';
		else
			a[*n].mark = 'F';
	}
	else if (a[*n].grade == 2){
		if ((a[*n].mid + a[*n].final) > 150)
			a[*n].mark = 'A';
		else
			a[*n].mark = 'F';
	}

	return a->mark;
}
void readNewStudent(Student *a, int *num)
{
	scanf("%s %d %d %d", a[*num].name, &a[*num].grade, &a[*num].mid, &a[*num].final);
	calculateClassGrade(a, num); 
}
int main(void)
{	
	int input, sNum = 0;
	Student Students[MAX];

	scanf("%d", &input);
	while(input == 1){
		readNewStudent(Students, &sNum);
		scanf("%d", &input);
		sNum++;	
	}
	printStudent(Students, &sNum);
}
