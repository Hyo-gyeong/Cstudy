#include <stdio.h>

int count(const int a[], const int key, int last)
{
	if (last == -1){
		return 0;
	}
	else {
		if(a[last] == key)
			return 1+count(a, key, last-1);
		else if (a[last] != key)
			return 0+count(a, key, last-1);
	}		
}
int main(void)
{
	int a[31];
	int last = -1;
	int input, key;

	do{
		scanf("%d", &input);
		last++;
		a[last] = input;
		

	}while(input != -1);

	scanf("%d", &key);
	printf("%d\n", count(a, key, last));
}