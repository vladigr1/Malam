/*#include <stdio.h>
#include <conio.h>

#define N  8

int LongestNegativeSequence(int Farry[], int Farrysize);
int IsAllNegativeArray(int Farry[], int Farrysize);// declartions 

int main()
{
	int array[N] = { 0 }, i, maxnegativearry = 0;// creating variables

	while (!(IsAllNegativeArray(array, N))) { //receives arrays and checks who has the longest negative sequence, stops when it receives an all negative array
		printf("Please the array: ");
		for (i = 0; i < N; ++i)
			scanf("%d", &array[i]);

		if (LongestNegativeSequence(array, N) > maxnegativearry && !(IsAllNegativeArray(array, N)))
			maxnegativearry = LongestNegativeSequence(array, N);
	}

	printf("Maximal negative sequence length is: %d", maxnegativearry);//prints who has the longest negative sequence

	getch();
	return 0;
}

int LongestNegativeSequence(int Farry[], int Farrysize)// defining a function that searches the longest negative sequence in an array and returns how long is it 
{
	int i, NegativeCouter1 = 0, MostNegatives = 0, StillNegativeFlag = 0; //* check if the following is sequance
	for (i = 0; i<Farrysize ; ++i)
	{
		if (Farry[i] < 0 ) {
			NegativeCouter1++;
			if (StillNegativeFlag == 0) {//*if it is a new sequance
				StillNegativeFlag = 1;
			}
		}
		else {
			StillNegativeFlag = 0;
		}
		if ((StillNegativeFlag == 0) || i == Farrysize -1) { //*checking if the new sequence is bigger only after it find that their is a possitive number and with the exception of the last number couse their can be a possibilty that the last number is the only negative and the seqnce size will be 1
			if (NegativeCouter1 > MostNegatives) {
				MostNegatives = NegativeCouter1;
			}
			NegativeCouter1 = 0;
		}
	}
	return MostNegatives;
}



int IsAllNegativeArray(int Farry[], int Farrysize)// defining a function which checks if all of the numbers in the array are negative, returns 1 if true 0 if fales
{
	int i, negatives = 0;
	for (i = 0; i<Farrysize; ++i)
		if (Farry[i]<0)	negatives++;
	if (negatives == Farrysize) return 1;
	return 0;
}
*/