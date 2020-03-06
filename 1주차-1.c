#include <stdio.h>

//논리1: 1부터 n까지의 합을 계산(1 + 2 + 3 + 4 +…+ n)
/*int main(void)
{
	int input;
	int i = 1;
	int sum = 0;

	printf("Enter n: ");
	scanf("%d", &input);

	while (i <= input){
		sum += i;
		i++;
	}
	printf("sum of 1 to n is %d\n", sum); 
}*/

//논리2: 1부터 n까지의 곱을 계산(1 * 2 * 3 *…* n)
/*int main(void)
{
	int input;
	int i = 1;
	int mtp = 1;

	printf("Enter n: ");
	scanf("%d", &input);

	while (i <= input){
		mtp *= i;
		i++;
	}
	printf("Multiplication of 1 to n is %d\n", mtp);
}*/

//논리 3-2: m을 n번 더함(m + m + … + m)
/*int main(void)
{
	int m, n;
	int i;
	int result = 0;

	printf("Enter m, n: ");
	scanf("%d %d", &m, &n);

	i = 1;
	while (i < n){
		printf("m + ");
		result += m;
		i++;
	}
	result += m;
	printf("m = %d\n", result);
}*/

//논리 4-2: m을 n번 곱합(m * m * … * m)
/*int main(void)
{
	int m, n;
	int i;
	int result = 1;

	printf("Enter m, n: ");
	scanf("%d %d", &m, &n);

	i = 1;
	while (i < n){
		printf("m * ");
		result *= m;
		i++;
	}
	result *= m;
	printf("m = %d\n", result);
}*/

//논리5: n개의 점수를 읽어서 총점을 계산, 평균을 계산(점수1 + 점수2 + …+ 점수n)
/*int main(void)
{
	int total = 0;
	int avr;
	int score, num, i = 1;

	printf("Enter number of students: ");
	scanf("%d", &num);
	while(i <= num){
		printf("Enter student%d number: ", i);
		scanf("%d", &score);
		total += score;
		i++;
	}
	avr = total / num;
	printf("The total score is %d\nThe average is %d\n", total, avr);
}*/
//논리6: n개의 점수를 읽어서 최대값을 찾는다(점수1, ...점수n중 가장 큰 값)
/*int main(void)
{
	int best = -1;
	int avr;
	int score, num, i = 1;

	printf("Enter number of students: ");
	scanf("%d", &num);
	while(i <= num){
		printf("Enter student%d number: ", i);
		scanf("%d", &score);
		
		if(score > best)
			best = score;
		i++;
	}
	printf("The best score is %d\n", best);
}*/
//논리 7: n 의 약수를 찾는다(찾아 출력한다)
/*int main(void)
{
	int input;
	int dNum = 1;

	printf("Enter a number: ");
	scanf("%d", &input);

	printf("The measure of %d is ", input);
	while(dNum < input){
		if (input % dNum == 0) //약수구함
			printf("%d, ", dNum);
		dNum++;
	}
	printf("%d\n", input);
}*/
//논리 8: n 이 소수인지 아닌지를 판별한다(이다 아니다를 출력)
//n이 소수인 경우는 1을 아니면 0을 반환하는 함수 isPrime(int n)을 정의하라.

/*int isPrime(int n)
{
	int i = 2;

	while (i < n){
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}
int main(void)
{
	int input;

	printf("Enter a number: ");
	scanf("%d", &input);

	if (isPrime(input) == 0)
		printf("%d is not a prime numebr\n", input);
	else
		printf("%d is a prime number\n", input);
}*/

//논리 9: 어떤 배열에 대해서 역순 배열 만들기
/*#define N  5
int main(void)
{
	int A[N] = {10, 20, 30, 40, 50};   
	int R[N];
	int i, j = N-1;

	printf("배열A는 ");
	for (i = 0; i < N; i++){
		printf("%d ", A[i]);
		R[j] = A[i];
		j--;
	}

	printf("\n역순배열은 ");
	for (j = 0; j < N; j++)
		printf("%d ", R[j]);
	printf("\n");
}*/
//논리10: 두 개의 배열이 같은가를 판별(하여 같다 다르다를 추력)
/*int isSameArray(int a[], int b[], int aSize, int bSize)
{
	int i = 0;

	if(aSize != bSize)
		return 0;
	else 
		while (i < aSize){
			if (a[i] != b[i])
				return 0;
			i++;
		}
	
	return 1;
}
int main(void)
{
	int A[100];
	int B[100];
	int a, b;
	int i;

	printf("Enter the number of array 'A' elements(under 101): ");
	scanf("%d", &a);

	for (i = 0; i < a; i++){
		printf("element %d: ", i+1);
		scanf("%d", &A[i]);
	}		

	printf("Enter the number of array 'B' elements(under 101): ");
	scanf("%d", &b);

	for (i = 0; i < b; i++){
		printf("element %d: ", i+1);
		scanf("%d", &B[i]);
	}

	if (isSameArray(A, B, a, b))
		printf("Two arrays are same\n");
	else
		printf("Two arrays are different\n");
}*/
//논리11(정렬): 배열의 값을 오름차순(혹은 내림차순)으로 정렬한다.
/*#define ListNum 10
int main(void)
{
	int list[ListNum];
	int temp;
	int i, j;

	printf("Enter %d elements: ", ListNum);
	for (i = 0; i < ListNum; i++)
		scanf("%d", &list[i]);

	for (i = 0; i < ListNum-1; i++)
		for (j = 0; j < ListNum-1; j++)
			if (list[j] > list[j+1]){
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}

	printf("Array Ordered: ");
	for (i = 0; i < ListNum; i++)
		printf("%d ", list[i]);
	printf("\n");
}*/
//논리12(탐색) 배열에서 어떤 값(탐색키, search key)을 가진 원소가 있는가를 판별
/*#define AN 12
int searchKeyInArray(int a[], int size, int searchKey)
{
	int i = 0;

	while(i < size){
		if (a[i] == searchKey)
			return i;
		i++;
	}
	if (i == size)
		return 0;
}
int main(void)
{
	int a[AN] = {11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66};
	int searchKey, k;

	printf("Enter a number you're looking for: ");
	scanf("%d", &searchKey);

	if (searchKeyInArray(a, AN, searchKey) == 0)
		printf("%d is not exist\n", searchKey);
	else{
		k = searchKeyInArray(a, AN, searchKey);
		printf("%d is exist. The index is %d\n", searchKey, k);
	}
}*/
//논리13: 어떤 특정한 값을 갖는 원소들을 모아 배열에 넣는다.
/*int main(void)
{
	int oddIndex = 0, evenIndex = 0;
	int odd[10];
	int even[10];
	int i = 0, input;

	printf("Enter 10 numbers: ");
	while (i < 10){
		scanf("%d", &input);
		if (input % 2 == 0){
			even[evenIndex] = input;
			evenIndex++;
		}
		else {
			odd[oddIndex] = input;
			oddIndex++;
		}
		i++;
	}

	printf("Odd Number: ");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);

	printf("\nEven Number :");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");
}*/
//논리 15: 배열을 역순배열로 바꾼다
void reverse(int a[], int num)
{
	int i;
	int temp;

	if (num % 2 == 1){ 
		for (i = 0; i < num/2; i++){
			temp = a[i];
			a[i] = a[num-i-1];
			a[num-i-1] = temp;
		}
	}
	else{ 
		for (i = 0; i < num/2; i++){
			temp = a[i];
			a[i] = a[num-i-1];
			a[num-i-1] = temp;
		}
	}
	printf("Reverse Array: ");
	for(i = 0; i < num; i++)
		printf("%d ", a[i]);
}
int main(void)
{
	int a[100];
	int i, input, e;

	printf("Enter a number: ");
	scanf("%d", &input);

	printf("Enter elements: ");
	i = 0;
	while(i < input){
		scanf("%d", &e);
		a[i] = e;
		i++;
	}
	reverse(a, i);
}