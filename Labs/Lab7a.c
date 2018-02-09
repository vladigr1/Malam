/*#define N 20
#include <stdio.h>

int addNums(int  array[]);
int main()
{
	int i, array[N];  /*creatin variable and setting the arrey size
	printf("Enter 20 integers separated by  \ spaces: ");
	for (i = 0; i<N; i++)
		scanf("%d", &array[i]); /*recieving input and give it to arrey
	printf("\n The sum is:%d\n", addNums(array));/*printing the sum and  calling function
	return 0;
}
int addNums(int array[])/*definiting function
{
	int i, sum = 0;
	for (i = 0; i < N; i++)
		sum = sum + array[i];      /*callucating sum by adding all arugment in the array 

	return sum;/* give back the result of the calculation
} 
*/