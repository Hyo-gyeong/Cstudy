#include <stdio.h>
//���
/*int sum(int n)
{
	 if (n == 1)
		 return 1;
	 else
		 return n + sum(n-1);
}
int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Sum of 1 to %d is %d\n", n, sum(n));
}*/

/*float fountain(int n)
{
	if (n == 1)
		return 1;
	else
		return (float)1/n + fountain(n-1);
}
int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Sum of 1/1 to 1/%d is %.3f\n", n, fountain(n));
}*/

/*int square(int n)
{
	if (n == 1)
		return 2;
	else
		return 2 * square(n-1);
}
int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("2^%d = %d\n", n, square(n));
}*/

/*int square(int x, int y)
{
	if (y == 1)
		return x;
	else
		return x * square(x, y-1);
}
int main(void)
{
	int x, y;

	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);
	printf("%d^%d = %d\n", x, y, square(x, y));
}*/

/*void fibo(int n1, int n2, int max)
{
	if (n1 + n2 <= max){
		printf(" %d", n1 + n2);
		return fibo(n2, n1 + n2, max);
	}
	else
		printf("\n");
}
int main(void)
{
	int n1 = 1, n2 = 1;
	int max, i;

	printf("Enter a number: ");
	scanf("%d", &max);

	printf("%d %d", n1, n2);
	fibo(n1, n2, max);
}*/
//LAB4_3 �Ǻ���ġ ������ ���� ����Ϸ��Ѵ�. ���õ� ���뿡 �� �۾��� �����Ͻÿ�. ******�� ���� �ڵ�
/*#include <stdio.h> 
int fibo(int n); 
int main(void) 
{ 
	 int n, idx; 
 
	 printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):"); 
	 scanf("%d", &n); 
 
	 for (idx = 0; idx < n; idx++) 
	 { 
		printf("%10d ", fibo(idx));   
		if ((idx + 1) % 5 == 0)   // ���ٿ� 5���� ����ϱ����ؼ�..   
			printf("\n"); 
	 } 
	 printf("\n"); 
} 
 
int fibo(int n) 
{ 
	 if (n == 0 || n == 1)   
		 return 1;
	 else   
		 return fibo(n-1) + fibo(n-2);
}*/

//HW4_1(static ������ ���)
/*void save(int money)
{
	int static sum = 0;

	sum += money;
	printf("��������� �Աݾ�: %d\n", sum);
}
int main(void)
{
	int money;

	printf("������ �ݾ�<-1 for exit>: ");
	scanf("%d", &money);
	while(money != -1){
		save(money);
		printf("������ �ݾ�<-1 for exit>: ");
		scanf("%d", &money);
	}
	printf("�Ա� �Ϸ�\n");
}*/

//HW4_2, ��ͻ�� x
/*#include <stdio.h> 
int fibo(int n); 
int main(void) 
{
	int n, idx; 
 
	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):");  
	scanf("%d", &n); 
 
	for (idx = 0; idx < n; idx++)  {   
		printf("%d ", fibo(idx));   
		if ((idx + 1) % 5 == 0)    
			printf("\n");  
	}  
	printf("\n"); 
}
int fibo(int n)
{
	int sum;
	static int i = 1, j = 1;

	if (n == 0 || n == 1)
		return 1;
	else{
		sum = i + j;
		i = j;
		j = sum;
		return sum;
	}
}*/
//HW4_3_0 
/*int twoPower(int x); 
int main(void) 
{
	int n; 
	printf("Enter a number: ");  
	scanf("%d", &n); 
 
	printf("2�� %d���� %d�̴�\n", n, twoPower(n)); 
} 
 
int twoPower(int x) 
{ 
	if (x == 0) 
		return 1;
	else   
		return 2 * twoPower(x-1);
}*/
//HW4_3_1
/*int xPoswer(int x, int y);
int main(void) 
{  
	int x, y;  
	
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y); 
 
	printf("%d�� %d���� %d�̴�\n", x, y, xPower(x, y)); 
} 
 
int xPower(int x, int y) 
{  
	if (y == 1)
		return x;
	else
		return x * xPower(x, y-1);
}*/
//HW4_4
/*#include<stdio.h> 
int comb(int n, int r) 
{   
	if (r == 0 || r == n)
		return 1;
	else
		return comb(n-1, r-1) + comb(n-1, r);
} 
int main(void) 
{
	int n, r; 
 
	printf("Enter n and r:");
	scanf("%d %d", &n, &r);
	printf("%d\n", comb(n, r));

	return 0; 
}*/
//HW4_5_1(�ݺ�) � ���� n�� ¦���� 2�� ������ Ȧ���� 3�� ���� ���� 1�� ���Ѵ�. n=1�� �� ������ ���� �۾��� �ݺ��Ѵ�.
/*int main(void)
{
	int count = 1;
	int input;

	printf("Enter a number: ");
	scanf("%d", &input);
	printf("%d ", input);

	while(input != 1){
		if (input % 2 == 0)
			input /= 2;
		else
			input = (input * 3) + 1;
		printf("%d ", input);
		count++;
	}
	printf("\nLength : %d\n", count);
}*/
//HW4_5_2(���)
/*int get_cycle_number(int n)
{
	if (n == 1)
		return 1;
	else if (n % 2 == 0){
		printf("%d ", n);
		return get_cycle_number(n/2);
	}
	else if (n % 2 == 1){
		printf("%d ", n);
		return get_cycle_number((n*3) + 1);
	}
}
int main(void)
{
	int input;

	printf("Enter a number: ");
	scanf("%d", &input);
	printf("%d\n", get_cycle_number(input));
}*/
//Challenge 4_1 ��Ŭ���� ȣ���� �ݺ����̿�
/*int gcd(int x, int y);
int main(void) 
{
	int a, b, big, small; 
 
	printf("Enter two numbers: ");  
	scanf("%d %d", &a, &b); 
 
	if (a < b)  {   
		big = b;  
		small = a; 
	} 
	else  {  
		big = a; 
		small = b; 
	} 
 
	printf("%d�� %d�� �ִ������� %d\n", a, b, gcd(big, small)); 
} 
int gcd(int x, int y) 
{ 
	int r, temp;
	r = x % y;

	while (y % r != 0){
		temp = y;
		y = r;
		r = temp % r;
	}
	return r;
}*/
//Challenge 4_2 �������� �ִ������� ���ϴ� �Լ��� ����Լ��� �̿��Ͽ�
/*int gcd(int x, int y)
{
	int temp;

	if (x % y == 0)
		return y;
	else{
		temp = y;
		y = x % y;
		x = temp;
		return gcd(x, y);
	}
}
int main(void) 
{
	int a, b, big, small; 
 
	printf("Enter two numbers: ");  
	scanf("%d %d", &a, &b); 
 
	if (a < b)  {   
		big = b;  
		small = a; 
	} 
	else  {  
		big = a; 
		small = b; 
	} 
 
	printf("%d�� %d�� �ִ������� %d\n", a, b, gcd(big, small)); 
}*/
//PROJECT1(����)�� ���� �غ�
/*#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

int hasElement(int set[], int size, int element)
{
	int i;

	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT;
	return DO_NOT_HAVE_ELEMENT;
}
void printSet(int set[], int size)
{
	int i;

	printf("< ");
	for (i = 0; i < size; i++){
		if (i == 0)
			printf("%d", set[i]);
		else
			printf(", %d", set[i]);
	}
	printf(" >\n");
}
int isSetEqual(int set1[], int size1, int set2[], int size2)
{
	int i, j;

	if (size1 != size2)
		return 0;
	else 
		for (i = 0; i < size1; i++)
			for (j = 0; j < size1; j++)
				if (set1[i] == set2[j])
					break;
	return 1;
}
int addOneElement(int set[], int size, int element)
{
	int i;

	for (i = 0; i < size; i++)
		if (set[i] == element){
			printf("Redundant\n");
			return size;
		}
	set[i] = element;
	return size+1;
}
int main(void)
{
	int setA[MAX_SET_SIZE] = {1, 2, 3};
	int setB[MAX_SET_SIZE] = {3, 2, 1, 4};
	int num;
	int sizeA = 3, sizeB = 4;

	printf("A:");
	printSet(setA, sizeA);
	printf("B:");
	printSet(setB, sizeB);

	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("���� A�� B�� ����.\n\n");
	else
		printf("���� A�� B�� �ٸ���.\n\n");

	printf("A�� 3�� �߰��ϸ�\n");
	sizeA = addOneElement(setA, sizeA, 3);
	printf("���� A:");
	printSet(setA, sizeA);

	printf("A�� 4�� �߰��ϸ�\n");
	sizeA = addOneElement(setA, sizeA, 4);
	printf("���� A:");
	printSet(setA, sizeA);

	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("���� A�� B�� ����\n");
	else
		printf("���� A�� B�� �ٸ���.\n");
}*/
//Project 01(����) : �迭�� �Լ� �Ű�����
#include <stdlib.h> 
 
#define MX_SET_SIZE 10
#define HVE_ELEMENT 1 
#define DO_NOT_HVE_ELEMENT 0 
 
int hasElement(int set[], int size, int element); 
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]);
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[]);
int setomplements(int set1[], int size1, int set2[], int size2, int setResult[]); 
void printSet(int set[], int size); 
int addOneElement(int set[], int size, int element); 
 
int main(int argc, char *argv[])  
{
	int i; 
 
	int setA[MX_SET_SIZE];  
	int setB[MX_SET_SIZE];  
	int setC[MX_SET_SIZE*2]; 
 
	int sizeA;  
	int sizeB;  
	int sizeC;    
	
	printf("Enter the size of Set A:"); 
	scanf("%d",&sizeA); 
	i = 0;  
	while( i < sizeA )  { 
		printf("Enter the number for Set A (%d/%d):", i+1, sizeA );  
		scanf( "%d", &setA[i] );   
		i = addOneElement(setA, i, setA[i]); 
	}   

	printf("Enter the size of Set B:");  
	scanf("%d",&sizeB);  
	i = 0;  
	while( i < sizeB )  {   
		printf("Enter the number for Set B (%d/%d):", i+1, sizeB );   
		scanf( "%d", &setB[i] );  
		i = addOneElement(setB, i, setB[i]); 
	}    
	
	printf("Set A: ");  
	printSet( setA, sizeA ); 
	printf("Set B: "); 
	printSet( setB, sizeB );   

	sizeC = setUnion( setA, sizeA, setB, sizeB, setC ); // Union, set is the result set  
	printf("Union of setA and setB: ");  
	printSet( setC, sizeC );    

	sizeC = setIntersecton( setA, sizeA, setB, sizeB, setC ); //Intersection, set is the result set 
	printf("Intersection of setA and setB: ");  
	printSet( setC, sizeC );  

	sizeC = setomplements( setA, sizeA, setB, sizeB, setC ); //omplements, set is the result set 
	printf("Set-theoretic difference of setA and setB (setA - setB): ");  
	printSet( setC, sizeC );   
	
	return 0; 
} 
// If the set has the element, returns 1; // else return 0; 
int hasElement(int set[], int size, int element) 
{
	int i = 0; 
	
	for( i = 0; i < size; i++ )  
		if( set[i] == element )     
			return HVE_ELEMENT; // we found it!    
	return DO_NOT_HVE_ELEMENT; 
}
// ���Ҹ� ���տ� �߰�. �̹� �����ϸ� �߰����� �ʰ� redundant��� ����Ѵ�. ������ ���� ũ�⸦ ��ȯ�Ѵ�.  
int addOneElement(int set[], int size, int element) 
{ 
	int i;
	
	for (i = 0; i < size; i++)
		if (set[i] == element){
			printf("Rebundant\n");
			return size;
		}

	set[i] == element;
	return size+1; 
} 
void printSet(int set[], int size) 
{ 
	int i;
	
	order(set, size);
	printf("<");
	for (i = 0; i < size; i++)
		printf(" %d", set[i]);
	printf(" >\n");
} 
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]) 
{  
	int i, j;

	for (i = 0; i < size1; i++)
		setResult[i] = set1[i];

	j = i;
	for (i = 0; i < size2; i++)
		if (hasElement(set1, size1, set2[i]) == 0)
			setResult[j++] = set2[i];
	return j;
}
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[]) 
{  
	int i, j = 0;

	for (i = 0; i < size1; i++)
		if (hasElement(set2, size2, set1[i]))
			setResult[j++] = set1[i];
	return j;
}
int setomplements(int set1[], int size1, int set2[], int size2, int setResult[]) 
{  
	int i, j = 0;

	for (i = 0; i < size1; i++)
		if (hasElement(set2, size2, set1[i]) == 0)
			setResult[j++] = set1[i];
	return j;
} 
int order(int set[], int size)
{
	int temp;
	int i, j;

	for (j = 0; j < size-1; j++)
		for (i = 0; i < size-1; i++)
			if (set[i] > set[i+1]){
				temp = set[i];
				set[i] = set[i+1];
				set[i+1] = temp;
			}
}
 