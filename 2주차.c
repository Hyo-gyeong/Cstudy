#include <stdio.h>
//LABHW3_1(<프로그래밍 논리의 이해>복습)
/*int indexSearch(int arr[], int size, int key)
{
	int i;

	for (i = 0; i < size; i++)
		if (arr[i] == key)
			return i+1;
	return 0;
}
int sumList(int arr[], int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
		sum += arr[i];

	return sum;
}
int maxList(int arr[], int size) 
{
	int best = -100;
	int i;

	for (i = 0; i < size; i++)
		if(arr[i] > best)
			best = arr[i];

	return best;
}
int main(void)
{
	int list[10] = {10, 20, 30, 40, 50, 40, 30, 20, 10, 0};
	int value;

	printf("Sum : %d\n", sumList(list, 10));
	printf("Max number : %d\n", maxList(list, 10));
	printf("Enter a value to search for : ");
	scanf("%d", &value);

	if (indexSearch(list, 10, value) == 0)
		printf("It doesn't exist\n");
	else
		printf("First %d is index number %d\n", value, indexSearch(list, 10, value));
}*/
//LABHW3_2(배열, 최대값 최소값 구하기)
/*#include <stdlib.h>
#include <time.h>

void initArray(int arr[], int size) 
{
	int i;

	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
}
void printMinMax(int arr[], int size)
{
	int i;
	int min = arr[0], max = arr[0];

	for (i = 1; i < size; i++){
		if (arr[i-1] > max)
			max = arr[i-1];
		if (min > arr[i])
			min = arr[i];
	}
	printf("Min : %d\nMax : %d\n", min, max);
}
void printArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%3d", arr[i]); 
	printf("\n");
}
int main(void)
{
	int arr[10];
	int i;
	srand(time(NULL));

	initArray(arr, 10);
	printArray(arr, 10);
	printMinMax(arr, 10);
}*/
//LABHW3_3_1(<프로그래밍 논리의 이해>에서 다룬 PROJECT_좌석예약을 모듈화)
/*#define SIZE 10

char askReservation() 
{
	char ans;

	printf("Do you want to make a reservation?(y/n): ");
	scanf("%c", &ans);
	return ans;
}
void printSeats(int s[], int size)
{
	int i;

	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++){
		printf("%2d", s[i]);
	}
	printf("\n");
}
void processReservation(int s[], int size, int seatNumber)
{
	if (s[seatNumber-1] == 1)
		printf("It has been already booked\n");
	else {
		s[seatNumber-1] = 1;
		printSeats(s, size);
	}
}
int main(void)
{
	int seatChoice; 
	int seats[SIZE] = {0};

	printf("******좌석 예약 시스템******\n"); 

	while (askReservation() == 'y')  {   

		printSeats(seats, SIZE); 

		printf("몇번째 좌석? "); 
		scanf("%d", &seatChoice); 

		processReservation(seats, SIZE, seatChoice); 

		while (getchar() != '\n'); // 버퍼 비움 
	}
}*/
//LABHW3_3_challenge 위의 문제와는 조금 예매 방식이 다른 기차표 예매 프로그램을 작성하려고 한다.
/*int askReservation(int s[])
{
	int num;

	printf("좌석을 예약하시겠습니까?(몇명): ");
	scanf("%d", &num);

	return num;
}
int processReservation(int s[], int num, int *sum)
{
	int i;

	if (*sum + num <= 10){
		for (i = *sum; i < *sum + num; i++)
			s[i] = 1;
		*sum += num;
		return 0;
	}
	else{
		for (i = *sum; i < 10; i++)
			s[i] = 1;
		return *sum + num - 10;
	}
}
void printSeats(int s[], int size)
{
	int i;

	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++){
		printf("%2d", s[i]);
	}
	printf("\n");
}
int main(void)
{
	int seats[10] = {0};
	int sum = 0;
	int rest = 0;
	int num;

	printf("*****좌석 예약 시스템*****\n");
	printSeats(seats, 10);
	do {
		rest = processReservation(seats, askReservation(seats), &sum);
		printSeats(seats, 10);
		if (sum == 10)
			break;
	}while(rest == 0);

	if (sum == 10)
		printf("예약이 다 찼습니다\n");
	else
		printf("%d명 예약 안됨\n" , rest);

}*/
//LABHW3_4_1(다중집합)
/*void printSet(int s[],int size)
{
	int i;

	printf("{ ");
	for (i = 0; i <= size; i++){
		if (i == 0)
			printf("%d", s[i]);
		else
			printf(", %d", s[i]);
	}
	printf(" }\n");
}
int main(void)
{
	int i, set[5];

	i = 0;
	while(i < 5){
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &set[i]);
		printSet(set, i);	
		i++;
	}
}*/
//LABHW3_4_2(집합) 중복허용하지 않음
/*int ifExist(int s[], int e, int size)
{
	int i = 0;

	if (size == 0)
		return 0;
	else{
		for (i = 0; i < size; i++)
			if (s[i] == e)
				return 1;
	}
	return 0;
}
void printSet(int s[], int size)
{
	int i;

	printf("{ ");
	for (i = 0; i <= size; i++){
		if (i == 0)
			printf("%d", s[i]);
		else
			printf(", %d", s[i]);
	}
	printf(" }\n");
}
int main(void)
{
	int set[5];
	int i = 0;

	while (i < 5){
		printf("Elements to add to the set: ");
		scanf("%d", &set[i]);
		if (ifExist(set, set[i], i))//exist
			printf("%d is already exist\n", set[i]);
		else{
			printSet(set, i);
			i++;
		}
	}
}*/
//LABHW3_5(<프로그래밍 논리의 이해>의 논리 11: 선택 정렬 함수화)
/*#include <stdlib.h>
#include <time.h>
#define SIZE 10

void selectionSort(int list[], int size)
{
	int i, j;
	int temp;

	for (i = 0; i < size-1; i++)
		for (j = i+1; j < size; j++)
			if (list[i] > list[j]){
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
}
int main(void)
{
	int i;
	int list[SIZE];
	srand(time(NULL));

	printf("Random number generated: ");
	for (i = 0; i < SIZE; i++){
		list[i] = rand() % 100;
		printf("%d ", list[i]);
	}

	selectionSort(list, SIZE);

	printf("\nRandom number sorted: ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]); 
	printf("\n");
}*/
//