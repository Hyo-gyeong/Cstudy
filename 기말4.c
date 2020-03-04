#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(char s[])
{
	char temp1[5];
	char temp2[5];

	strncpy(temp1, s, 3);
	s += 3;
	strncpy(temp2, s, 3);

	return atoi(temp1) + atoi(temp2);
}
int main(void)
{
	char s[50];

	scanf("%s", &s);
	printf("%d\n", solution(s));

}