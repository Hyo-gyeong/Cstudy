/*1부터 n까지, 1부터 m까지 숫자가 적힌
서로 다른 주사위 2개를 던졌을 때 나올 수 있는 모든 경우를 출력해보자.
단, n, m은 10이하의 자연수*/

#include <stdio.h>
int main(void)
{
	int n, m;
	int i, j;

	do {
		scanf("%d %d", &n, &m);
	}while (n >= 10 || m >= 10);

	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			printf("(%d, %d)\n", i, j);
	
}