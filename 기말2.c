//포인터 문자열 속의 숫자들을 각각 더해서 그 합을 출력하고 숫자들로 이루어진 문자열을 출력하는 프로그램을 작성하려한다.
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int digits(const char *p1, char *p2)
{
	int sum = 0;
	char temp[10];

	while(*p1){
		if(isdigit(*p1)){
			strncat(p2, p1, 1);
			strncpy(temp, p1, 1);
			sum += atoi(temp);
		}
		p1++;
	}
	
	return sum;
}
int main(void)
{
	char p1[100], p2[100]="";

	scanf("%s", &p1);
	printf("%d\n", digits(p1, p2));
	printf("%s\n", p2);
}