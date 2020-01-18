#include <stdio.h>
int factorial(int x)
{
	if (x == 2)
		return 2;
	else
		return x * factorial(x-1);
}
int main(void)
{
	int input;

	scanf("%d", &input);
	printf("%d\n", factorial(input));
}