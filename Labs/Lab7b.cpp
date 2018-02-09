/*#include <stdio.h>
#include <conio.h>

#define N 10

double avg(double array[], int size); // declartion 

int main()
{
	int i ,numcap = 0; // creating variables
	double min[N], average; //creating variables
	printf("Enter lap time separted by \ spaces: \n"); // requestin input
	for (i = 0; i < N; ++i) //getting input by loop
		scanf("%lf", &min[i] );
	average =avg(min, N); //getting th result of the average by calling avg
	for (i = 0; i < N ; ++i) 
		if (min[i] < average)// checking if they below the average
			++numcap;

	printf("Amount bellow averege %d", numcap); //printing reuslt
	getch();
	return 0;
}

double avg(double array[], int size) // define function that caclucates the average of array 
{
	int i;
	double sum = 0;
	for (i = 0; i < size; ++i)
		sum += array[i];
	return sum / size;
	
} */