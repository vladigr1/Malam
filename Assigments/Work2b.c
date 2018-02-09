/*#include <stdio.h>
#include <conio.h>

#define N 8

int ReadArray(int arr[], int size);
void Pairs(int arr[], int size);

int main() {
	int array[N];
	//int test[N] = {7, 12, 15, 3, 12, 15, 4, 15, 3, 12, 15, 7, 12, 7, 12}; //test arrey if you want to use arrey that has givven in the assigment
	//Pairs(test, N);
	if (ReadArray(array, N))
	Pairs(array, N);
	getch();
	return 0;
}

int ReadArray(int arr[], int size) {// RUN squance to put number in array
	int i, temp;
	printf("Please Enter %d digit to the array: ", N);
	for (i = 0; i < size; ++i) {
		if (scanf("%d", &temp) != 1) { //check scan
			printf("Their was error with the input\n");
			i = size;
			return 0;
		}
		else {
			arr[i] = temp;
		}
	}
	return 1;
}

void Pairs(int arr[], int size) {//check the most common pair in the arr
	int i, j, MostCommonPareNumber[3 * N] = { 0 }, pair[2]
		, BiggestPairYet = 0, BiggestPairIndex = 0, MaxPairEqual = 0;
	for (i = 0; i < size - 1; ++i) {//search in the data center if the pair exist
		pair[0] = arr[i];
		pair[1] = arr[i + 1];
		for (j = 0; j < 3 * size - 2 && j != -1; j += 3) { //create new pair in the data center
			if (pair[0] == MostCommonPareNumber[j]) {
				if (pair[1] == MostCommonPareNumber[j + 1]) {
					++MostCommonPareNumber[j + 2];
					j = -4; //j = -4 after +3 will be -1 which is exist sign
				}
			}
			if (MostCommonPareNumber[j+2] == 0) {
				MostCommonPareNumber[j] = pair[0];
				MostCommonPareNumber[j + 1] = pair[1];
				MostCommonPareNumber[j + 2] = 1;
				j = -4;
			}
		}
	}
	for (i = 2; i < 3 * size - 1; i += 3) { // check which pair is most common if their has the same rate with other pair it will set the variable maxpairequal and it testet in the print if it equal to biggestpairyet and if they are in the same size it will run the loop for printing all of them
		if (MostCommonPareNumber[i] == 0);
		else if (MostCommonPareNumber[i] > BiggestPairYet) {
			BiggestPairYet = MostCommonPareNumber[i];
			BiggestPairIndex = i;
		}
		else if (MostCommonPareNumber[i] == BiggestPairYet) {
			MaxPairEqual = MostCommonPareNumber[i]; // max pair equal the amount of apearenss of pairs that had apeared before as max
		}
	}
	printf("The Most common pair is:\n");
	if (MaxPairEqual == BiggestPairYet) {//print if it equal to biggestpairyet and if they are in the same size it will run the loop for printing all of them
		for (i = BiggestPairIndex; i < 3 * size - 1; i += 3) {
			if (MostCommonPareNumber[i] == BiggestPairYet) {
				printf("(%d,%d)\n", MostCommonPareNumber[i - 2], MostCommonPareNumber[i - 1]);
			}
		}
	}
	else {//print the single most common pair
		printf("(%d,%d)\n", MostCommonPareNumber[BiggestPairIndex - 2], MostCommonPareNumber[BiggestPairIndex - 1]);
	}
}*/