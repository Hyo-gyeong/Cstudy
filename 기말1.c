//�̸��� Ű�� ������ �� �� ������ �ϳ��� ���ڿ��� ���� ����ϴ� ���α׷��� �ۼ��϶�.
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