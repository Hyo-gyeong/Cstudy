#include <stdio.h>
int fibo(int x1, int x2, int x3, int count)
{
	if(count == 1)
		return x1;
	else {
		printf("%4d", x1);
		return fibo(x2, x3, x2+x3, count-1);
	}
}
int main(void)
{
	int count;
	int x1 = 1, x2 = 1, x3 = 2;

	scanf("%d", &count);	
	printf("%4d", fibo(x1, x2, x3, count));
}