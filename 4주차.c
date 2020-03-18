#include <stdio.h>
/*int main(void)
{
	int list[5][3] = {0};

	//int = 4 bytes;
	printf("%d\n", sizeof(list));
	printf("%d\n", sizeof(list[0]));
	printf("%d\n", sizeof(list)/sizeof(list[0]));
}*/

/*1.table = { 0, 1, 2,
			10,11,12,
			20,21,22,
			30,31,32,
			40,41,42}로 초기화
*/
/*int main(void)
{
	int table[5][3];
	int i, j;
	int sum = 0;

	for (i = 0; i < 5; i++){
		for (j = 0; j < 3; j++){
			table[i][j] = (i * 10) + j;
			printf("%3d", table[i][j]);
		}
		printf("\n");
	}

	//table안의 모든 값을 더하여 출력하는 코드 부분을 완성하라,
	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			sum += table[i][j];

	printf("\n%3d\n\n", sum);

	//첫 행을 더하여 출력하는 코드 부분을 완성하라.
	sum = 0;
	for (j = 0; j < 3; j++)
		sum += table[0][j];

	printf("%d\n\n", sum);

	//모든 행을 각각 더하여 출력하는 코드 부분을 완성하라.
	for (i = 0; i < 5; i++){
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += table[i][j];
		printf("%d\n", sum); 
	}
	printf("\n");

	//첫 열을 더하여 출력하는 코드 부분을 완성하라.
	sum = 0;
	for (i = 0; i < 5; i++)
		sum += table[i][0];
	printf("%d\n\n", sum);

	//모든 열을 각각 더하여 출력하는 코드 부분을 완성하라
	for (j = 0; j < 3; j++){
		sum = 0;
		for (i = 0; i < 5; i++)
			sum += table[i][j];
		printf("%d\n", sum);
	}

}*/

//2차원 배열의 함수 매개변수 전달 - 0으로만 초기화됨!!
/*void printTable(int t[][5], int size  ) // 정의 
{
	int i, j; 
	
	for (i  = 0; i < size; i++) { 
		for (j = 0; j < 5; j++)
			printf("%5d", t[i][j]); 
		printf("\n"); } 
} 
int main(void)
{ 
	int table1[3][5] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300, 400, 500}}; 
	int table2[2][5] = {{1, 2, 3}, {10}}; // 어떤 값이 들어가나?

	printTable(table1, 3); // 호출: 2차원 배열의 이름
	printTable(table2, 2); // 호출: 2차원 배열의 이름 
}*/

//LAB5_3 
/*void main() 
{ 
	 char str[][10] = {"ABC", "abcd", "Hello"}; 
	 int i, j; 
  
	 printf("가) str의 메모리 크기는 %d이다.\n\n", sizeof(str)); //char = 1 byte
	 for (i = 0; i < 3; i++) { 
		  printf("%d번째 스트링: %s, ", i + 1, str[i]); 
		  printf("아스키 코드값: "); 

		  j = 0;
		  while (str[i][j] != '\0') { 
			  printf("%4d", str[i][j]);
			  j++;
		  } 
		  printf("\n");  
	 } 
} */
//LAB5_4
/*int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4}};
	int i, j;
	int total = 0;
	int best;

	printf("배열 test의 원소 출력\n");

	for (i = 0; i < 4; i++){
		printf("\n%d번째 row: ", i+1);
		for (j = 0; j < 3; j++)
			printf("%3d", test[i][j]);
	}
	
	printf("\n\n배열 test의 원소 출력\n");

	for (i = 0; i < 4; i++){
		printf("\n%d번째 row: ", i+1);
		for (j = 0; j < 3; j++){
			if (j == 2)
				test[i][j] = -1;
			total += test[i][j];
			printf("%3d", test[i][j]);
		}
	}

	printf("\n\nTotal is %d\nAverage is %.2f\n\n", total, (double)total / (i * j));

	for (i = 0; i < 4; i++){
		best = test[i][0];
		for (j = 0; j < 2; j++){
			if (best < test[i][j])
				best = test[i][j];
		}
		printf("%d번째 row에서의 최댓값: %d\n", i+1, best); 
	}

}*/
//HW5_1
/*int main(void)
{
	int MT[9][8] = {0};
	int i, j;
	int num;

	printf("Multplication table\n");
	for (i = 2; i < 10; i++){
		for (j = 1; j < 10; j++)
			printf("%3d", i * j);
		printf("\n");
	}
	printf("원하는 구구단은?: ");
	scanf("%d", &num);

	for (i = 1; i < 10; i++)
		printf("%3d", num * i);
	printf("\n");
}*/
//HW5_2
/*int main(void)
{
	int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8}; 
	int arr2[4][2]; 
	int arr3[8];
	int i, j, k;

	printf("배열 A\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 4; j++){
			arr2[j][i] = arr1[i][j]; 
			printf("%3d", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n배열 B\n");
	for (i = 0; i < 4; i++){
		for (j = 0; j < 2; j++)
			printf("%3d", arr2[i][j]);
		printf("\n");
	}

	printf("\n배열 C\n");
	k = 0;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++){
			arr3[k] = arr1[i][j];
			printf("%3d", arr3[k++]);
		}
	printf("\n");	
}*/
//HW5_3
/*int main(void) 
{
	int gradeTable[5][4] = {{10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, 
							{90, 95, 20, 0}, {0, 0, 0, 0}}; 
	int i, j; 

	printf("a)\n"); 
	for (i = 0; i < 5; i++) { 
		for (j = 0; j < 4; j++) 
			printf("%4d", gradeTable[i][j]);
		printf("\n"); 
	}

	printf("b)\n");
	//세로 합
	for (j = 0; j < 3; j++)
		for (i = 0; i < 4; i++)
			gradeTable[4][j] += gradeTable[i][j];

	//가로 합
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			gradeTable[i][3] += gradeTable[i][j];
		
	for (i = 0; i < 5; i++){
		for (j = 0; j < 4; j++)
			printf("%4d", gradeTable[i][j]);
		printf("\n");
	}
}*/

//LAB5_5(2차원 배열) (hw5_4)각 열의 합계를 구하여 출력하는 프로그램을 작성하라
/*#include <stdlib.h>
#include <time.h>

void initTable(int t[][5], int num)
{
	int i, j;

	for (i = 0; i < num; i++)
		for (j = 0; j < 5; j++)
			t[i][j] = rand() % 100;
}
void printTable (int t[][5], int num)
{
	int i, j;

	for (i = 0; i < num; i++){
		for (j = 0; j < 5; j++)
			printf("%5d", t[i][j]);
		printf("\n");
	}
}
void printRowSum (int t[][5], int num)
{
	int i, j;
	int rowtotal;

	for (j = 0; j < 5; j++){
		rowtotal = 0;
		for (i = 0; i < num; i++)
			rowtotal += t[i][j];
		printf("%5d", rowtotal);
	}
	printf("\n");
}
int totalTable(int t[][5], int num)
{
	int i, j;
	int total = 0;

	for (i = 0; i < num; i++)
		for (j = 0; j < 5; j++)
			total += t[i][j];

	return total;
}
int main(void)
{
	int table[3][5];
	int i, j;
	int total = 0;
	
	srand(time(NULL));
	initTable(table, 3);
	printf("발생된 난수의 평균은 %d입니다\n", totalTable(table, 3) / 15);

	printTable(table, 3);

	printf("--------각 열의 합--------\n");
	printRowSum(table, 3);

	return 0;
}*/
//HW5a_2(2차원 배열 돌리기)
/*void rotateTable(int table[][4], int num)
{
	int i, j;
	int temp[4][4];

	for (i = 0; i < num; i++)
		for (j = 0; j < num; j++)
			temp[i][j] = table[i][j];

	for (i = 0; i < num; i++)
		for (j = 0; j < num; j++)
			table[i][j] = temp[num-1-j][i];
		
}
void printTable(int table[][4], int num)
{
	int i, j;

	for (i = 0; i < num; i++){
		for (j = 0; j < num; j++)
			printf("%4d", table[i][j]);
		printf("\n");
	}
	printf("\n");
}
int main(void)
{
	int table[4][4];
	int i, j;
	int start = 1;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			table[i][j] = start++;

	printTable(table, 4);
	rotateTable(table, 4);
	printTable(table, 4);
	rotateTable(table, 4);
	printTable(table, 4);
	rotateTable(table, 4);
	printTable(table, 4);
	rotateTable(table, 4);
	printTable(table, 4);
}*/

//Challenge5_1
void printSeats (int s[][10], int c)
{
	int i, j;

	printf("------------------------------------------\n");
	printf("\t");
	for (i = 0; i < 10; i++)
		printf("%3d", i+1);
	printf("\n------------------------------------------\n");

	for (i = 0; i < c; i++){
		printf("%d\t", i+1);
		for (j = 0; j < 10; j++)
			printf("%3d", s[i][j]);
		printf("\n");
	}
}
int main(void)
{
	char ans, r, c;
	int i;
	int seats[3][10] = {0};

	while (1){
		printf("좌석을 예약하시겠습니까?(y/n) ");
		scanf("%c", &ans);
		if (ans == 'n')
			break;

		printSeats(seats, 3);

		printf("몇번째 좌석을 예약하시겠습니까?(행, 열)의 형태로 입력: ");
		scanf("%d %d", &r, &c);

		if (seats[r-1][c-1] == 1)
			printf("이미 예약된 자리입니다.\n");
		else{
			seats[r-1][c-1] = 1;
			printSeats(seats, 3);
		}	
	}
}