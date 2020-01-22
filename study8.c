#include <stdio.h>
int main(void)
{
	int first, d, last;

	printf("Start Number: ");
	scanf("%d", &first);
	printf("Common Difference: ");
	scanf("%d", &d);
	printf("Last Number: ");
	scanf("%d", &last);

	while (first <= last){
		printf("%3d", first);
		first += d;
	}
	printf("\n");
}