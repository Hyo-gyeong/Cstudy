#include <stdio.h>
int main(void)
{
	int input, x, y, count = 1;
	int MS[100][100];

	printf("Let's make a magic square!\nEnter an odd number!\n");
	scanf("%d", &input);

	//�ʱ�ȭ
	for (x = 0; x < input; x++)
		for (y = 0; y < input; y++)
			MS[x][y] = 0;

	//������
	x = 0;
	y = input/2;

	while (count <= input*input){
		MS[x][y] = count++;
		//������ �� �밢������ �ö�
		x--;
		y++;

		//���� ������ ��� ���
		if (x < 0 && y < input)
			x = input-1;
		//���� ������ ��� ���
		else if (y >= input && x >= 0)
			y = 0;
		//������ ������ ���ڰ� �̹� �����ϴ� ��� �Ǵ� ��� ���� ��� ��� ��� 
		else if (MS[x][y] != 0 || (x < 0 && y >= input)){
			x += 2;
			y--;
		}		
	}

	for (x = 0; x < input; x++){
		for (y = 0; y < input; y++)
			printf("%4d", MS[x][y]);
		printf("\n");
	}
}