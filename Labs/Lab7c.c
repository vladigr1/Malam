 #include <stdio.h>
#include <conio.h>
#define N 10

void revArr(int array1[], int size1, int array2[], int size2); // declartion 
int revNum(int num);

int main()
{
	int i,array[N] ;
	printf("Enter array: ");
	for (i = 0; i < N; ++i) //getting input by loop
		scanf("%lf", &array[i]);
	
	
	
	getch();
	return 0;
}

int revNum(int num)
{
	int rev=0;
	while (num!=0)
	{
		rev = num % 10 + rev * 10;
		num /=10 ;
		printf("num %d rev %d",num, rev);
	}
	
}

void revArr(int array1[], int size1, int array2[], int size2)
{
	int i = 0;
	for (i = 0; i < size1 && i<size2; i++)
	{
		array2[i] = revNum(array1[i]);
		
	}
}