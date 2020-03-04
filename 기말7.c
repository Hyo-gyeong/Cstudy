//잘되는 것 같긴한데 왜 그런지 모르겠네;20.3.4
#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct{
	char name[10];
	int grade, mid, final;
	char mark;
}Student;

Student *bestStudent(Student *m, int size)
{
	Student temp;
	int i;
	int best = 0;
	int bestIndex = 0;

	for(i = 0; i < size; i++)
		if (m[i].mid + m[i].final > best) {
			bestIndex = i;
			best = m[i].mid + m[i].final;
		}
	
	strcpy(temp.name, m[bestIndex].name);
	temp.grade = m[bestIndex].grade;
	temp.mid = m[bestIndex].mid;
	temp.final = m[bestIndex].final;
	temp.mark = m[bestIndex].mark;

	return &temp;
}
void printStudent(Student *a)
{
	printf("%s %d %d %d %c\n", a->name, a->grade, a->mid, a->final, a->mark);
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
	Student Students[MAX], tempBest;

	scanf("%d", &input);
	while(input == 1){
		readNewStudent(Students, &sNum);
		scanf("%d", &input);
		sNum++;	
	}
	tempBest = *bestStudent(Students, sNum);
	printStudent(&tempBest);
}
