#include <stdio.h>

//��1: 1���� n������ ���� ���(1 + 2 + 3 + 4 +��+ n)
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

//��2: 1���� n������ ���� ���(1 * 2 * 3 *��* n)
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

//�� 3-2: m�� n�� ����(m + m + �� + m)
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

//�� 4-2: m�� n�� ����(m * m * �� * m)
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

//��5: n���� ������ �о ������ ���, ����� ���(����1 + ����2 + ��+ ����n)
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
//��6: n���� ������ �о �ִ밪�� ã�´�(����1, ...����n�� ���� ū ��)
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
//�� 7: n �� ����� ã�´�(ã�� ����Ѵ�)
/*int main(void)
{
	int input;
	int dNum = 1;

	printf("Enter a number: ");
	scanf("%d", &input);

	printf("The measure of %d is ", input);
	while(dNum < input){
		if (input % dNum == 0) //�������
			printf("%d, ", dNum);
		dNum++;
	}
	printf("%d\n", input);
}*/
//�� 8: n �� �Ҽ����� �ƴ����� �Ǻ��Ѵ�(�̴� �ƴϴٸ� ���)
//n�� �Ҽ��� ���� 1�� �ƴϸ� 0�� ��ȯ�ϴ� �Լ� isPrime(int n)�� �����϶�.

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

//�� 9: � �迭�� ���ؼ� ���� �迭 �����
/*#define N  5
int main(void)
{
	int A[N] = {10, 20, 30, 40, 50};   
	int R[N];
	int i, j = N-1;

	printf("�迭A�� ");
	for (i = 0; i < N; i++){
		printf("%d ", A[i]);
		R[j] = A[i];
		j--;
	}

	printf("\n�����迭�� ");
	for (j = 0; j < N; j++)
		printf("%d ", R[j]);
	printf("\n");
}*/
//��10: �� ���� �迭�� �������� �Ǻ�(�Ͽ� ���� �ٸ��ٸ� �߷�)
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
//��11(����): �迭�� ���� ��������(Ȥ�� ��������)���� �����Ѵ�.
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
//��12(Ž��) �迭���� � ��(Ž��Ű, search key)�� ���� ���Ұ� �ִ°��� �Ǻ�
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
//��13: � Ư���� ���� ���� ���ҵ��� ��� �迭�� �ִ´�.
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
//�� 15: �迭�� �����迭�� �ٲ۴�
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