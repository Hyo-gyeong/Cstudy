//������ ���ڿ� ���� ���ڵ��� ���� ���ؼ� �� ���� ����ϰ� ���ڵ�� �̷���� ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ϸ��Ѵ�.
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