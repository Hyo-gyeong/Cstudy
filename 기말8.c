//해결은 했는데 뭔가 내 개념이 명확하지가 않아..
#include <stdio.h>
#include <string.h>
#define Len 50

typedef struct{
	char korean[Len];
	char english[Len];
}Dictionary;

int ifExist (Dictionary *d, int *count, char c[])
{
	int i = 0;

	while (i < *count){
		if (strcmp(d[i].english, c) == 0) //존재하면
			return i;
		i++;
	}
	return 2;
}
int main(void)
{
	Dictionary Dict[100];
	int i;
	int count = 1;

	scanf("%s", &Dict[0].english);
	scanf("%s", Dict[0].korean);

	do{
		scanf("%s", &Dict[count].english);
		if (strcmp(Dict[count].english, "quit") == 0)
			break;
		if (ifExist(Dict, &count, Dict[count].english) == 2){
			scanf("%s", &Dict[count].korean);
			count++;
		}
		else {
			i = ifExist(Dict, &count, Dict[count].english);
			printf("%s\n", Dict[i].korean);
		}
	} while(strcmp(Dict[count].english, "quit") != 0);

}