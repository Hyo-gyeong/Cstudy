#include <stdio.h>
//sizeof������
/*int main(void)
{
	int stdS;
	int scores[5];
	int i, sum = 0;
	int num = sizeof(scores) / sizeof(int); //5(arr num) * 4 / 4(int byte)

	printf("Enter the scores of 5 students!\n");
	for (i = 0; i < num; i++){
		scanf("%d", &stdS);
		scores[i] = stdS;
		sum += stdS;
	}

	printf("Total score is %d\n", sum);
	printf("The average is %d\n", sum / num);
}*/

//LAB1_1(for ��, �迭) �迭�� ���� ����ϱ� 5���� ������ �迭�� �Է� �޾Ƽ� ���հ� ����� ����ϰ� �� �迭�� ������ ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
/*int main(void)
{
	int num[5];
	int i, sum = 0;

	for (i = 0; i < 5; i++){
		printf("Enter %dth nunmber : ", i+1);
		scanf("%d", &num[i]);
		sum += num[i];
	}

	printf("--------------------------\n");
	printf("total : %d\naverage : %d\n", sum, sum / 5);
	printf("--------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

}*/

//LAB1_2(for ��, �迭)���� �߻����Ѽ� ����غ���. 
/*#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[100];
	int num, i, best = -1;
	srand(time(NULL)); //�ּ�ó���� �ǻ糭������ ����

	printf("Enter the number of random numbers:(<= 100): "); 
	scanf("%d", &num);

	for (i = 0; i < num; i++){
		data[i] = rand() % 100;
		if (data[i] > best)
			best = data[i];
	}

	printf("Maximum value is %d\n", best);

	for (i = 0; i < num; i++){
		printf("%5d", data[i]);
		if ((i+1) % 5 == 0)
			printf("\n");
	}
}*/

//HW1_1(for ��, �迭, rand()�Լ�
/*#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num, i;
	int count[10] = {0};
	int randNum[100];
	srand(time(NULL));

	printf("Enter the number of random numbers(<= 100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++){
		randNum[i] = rand() % 10;
		count[randNum[i]] += 1;
	}

	for (i = 0; i < 10; i++)
		printf("Number of %d : %d\n", i, count[i]);
	printf("----------------------------------------------\n");

	printf("Random numbers...\n");
	for (i = 0; i < num; i++){
		printf("%5d", randNum[i]);
		if ((i+1) % 5 == 0)
			printf("\n");
	}
}*/
//HW1_2(���̵� �߻�)(����) ���Ǳ� ���α׷� : �Ž����� ����ϱ� 
int main(void)
{
	int change;

	printf("Enter the amount of change : ");
	scanf("%d", &change);

	printf("500 coin: %d\n", change/500);
	change %= 500;
	printf("100 coins: %d\n", change/100);
	change %= 100;
	printf("50 coins: %d\n", change/50);
	change %= 50;
	printf("10 coins: %d\n", change/10);
}