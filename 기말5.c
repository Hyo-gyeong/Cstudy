#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(char s[])
{
	char temp[100];
	int i;
	int count = 1;
	int sum = 0;
	
	for (i = 0; s[i] != '\0'; i++);

	while(i > count){
		strncpy(temp, s, count);
		sum += atoi(temp);
		s += count;
		i -= count;
		count++;
	}
	strcpy(temp, s);
	sum += atoi(temp);

	return sum;

}
int main(void)
{
	char s[100];

	scanf("%s", &s);
	printf("%d\n", solution(s));
}