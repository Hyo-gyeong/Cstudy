//이름과 키와 몸무게 이 세 정보를 하나의 문자열로 만들어서 출력하는 프로그램을 작성하라.
#include <stdio.h>
int main(void)
{
	char full[100];
	char name[100];
	int height;
	float weight;

	scanf("%s\n%d\n%f", &name, &height, &weight);
	sprintf(full, "%s%d%.1f", name, height, weight);
	printf("%s", full);

	return 0;
}