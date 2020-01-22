#include <stdio.h>
int main(void)
{
	int input, x, y, count = 1;
	int MS[100][100];

	printf("Let's make a magic square!\nEnter an odd number!\n");
	scanf("%d", &input);

	//초기화
	for (x = 0; x < input; x++)
		for (y = 0; y < input; y++)
			MS[x][y] = 0;

	//시작점
	x = 0;
	y = input/2;

	while (count <= input*input){
		MS[x][y] = count++;
		//오른쪽 위 대각선으로 올라감
		x--;
		y++;

		//열의 범위를 벗어날 경우
		if (x < 0 && y < input)
			x = input-1;
		//행의 범위를 벗어날 경우
		else if (y >= input && x >= 0)
			y = 0;
		//범위에 있지만 숫자가 이미 존재하는 경우 또는 행과 열을 모두 벗어난 경우 
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