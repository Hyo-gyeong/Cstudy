/*1���� n����, 1���� m���� ���ڰ� ����
���� �ٸ� �ֻ��� 2���� ������ �� ���� �� �ִ� ��� ��츦 ����غ���.
��, n, m�� 10������ �ڿ���*/

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