//인수분해코드 
#include <stdio.h>
int xPlus(int a, int b, int *x, int *y)
{
	if (b > 0){
		do {
			if (*x + *y == a && *x * *y == b)
				break;
			(*x)++;
			if (b % *x != 0) //나머지 문제
				while (b % *x == 0)
					(*x)++;
			*y = b / *x; 
		}while (*x < b);
		if (*x == b && *x != *y)
			return 0;
		else if (*x == *y)
			return 1;
	}
	else if (b < 0) {
		do {
			if (*x + *y == a && *x * *y == b)
				break;
			(*x)++;
			if (b % *x != 0) //나머지 문제
				while (b % *x == 0)
					(*x)++;
			*y = b / *x; 
		}while (*x < -b);
		if (*x != -b)
			return 0;
	}
	return 2;
}
int xMinus(int a, int b, int *x, int *y)
{
	if (b > 0){
		do {
			if (*x + *y == a && *x * *y == b)
				break;
			(*x)--;			
			if (b % *x != 0)
				while (b % *x == 0)
					(*x)--;
			*y = b / *x; 
		}while (*x > -b);
		if (*x == -b && *x != *y)
			return 0;
		else if (*x == *y)
			return 1;
	}
	else if (b < 0){
		do {
			if (*x + *y == a && *x * *y == b)
				break;
			(*x)--;			
			if (b % *x != 0)
				while (b % *x == 0)
					(*x)--;
			*y = b / *x; 
		}while (*x > b);
		if (*x != b)
			return 0;
	}
	return 2;
}

int main(void)
{
	int a, b;
	int x, y;

	printf("x^2+ax+b에서 a와 b에 해당하는 수를 입력하세요(a, b != 0):");
	scanf("%d %d", &a, &b); 

	if (a > 0)
		x = 1;
	else
		x = -1;

	if (b > 0)
		y = b;
	else
		y = -b;
	
	if (a > 0 && b > 0){						//ex)x2+5x+6
		if (xPlus(a, b, &x, &y) == 0)
			printf("x^2+%dx+%d\n", a, b);
		else if (xPlus(a, b, &x, &y) == 1)	//ex)x2+4x+4
			printf("(x+%d)^2\n", x);
		else									
			printf("(x+%d)(x+%d)\n", x, y);
		
	}
	else if (a > 0 && b < 0){					//x2+x-6
		if (xPlus(a, b, &x, &y) == 0)
			printf("(x+%d)(x%d)\n", x, y);
		else 
			printf("x^2+%dx%d\n", a, b);
	}
	else if (a < 0 && b < 0){					//ex)x2-x-6
		if (xMinus(a, b, &x, &y) == 0)
			printf("x^2%dx%d\n", a, b);
		else 
			printf("(x%d)(x+%d)\n", x, y);
	}
	else if (a < 0 && b > 0) {				//x2-6x+9
		if (xMinus(a, b, &x, &y) == 0)
			printf("x^2%dx+%d\n", a, b);
		else if (xMinus(a, b, &x, &y) == 1)
			printf("(x%d)^2\n", x);
		else 
			printf("(x%d)(x%d)\n", x, y);
	}
}
