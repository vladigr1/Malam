#include <stdio.h>
#include <conio.h>
#include <time.h>
//their still the mistake of not testing repeat sequance of 5 0 and 0 5 sadly:(
/*
#define N 16 //number of sites
#define C 4 //number of groups

void SetStart(int farray[], int size); //its fills it with random num
void TrailSites(int farray[], int size);
void ResetArray(int Farray[], int size);
void PrintArray(int farray[], int size);

int main() {
	int sites[N];
	srand(time(NULL));
	SetStart(sites, N);
	TrailSites(sites, N);
	printf("Array result:\n");
	PrintArray(sites, N);
	getch();
	return 0;
}

void SetStart(int farray[], int size) { // set the field
	int i, KeyInCheckOption, RandomResult, CheckOption[N];
	ResetArray(CheckOption, size);
	for (i = 0; i < size; ++i) {
		RandomResult = rand() % size;
		if (CheckOption[RandomResult] == -2 && CheckOption[RandomResult] != RandomResult) {
			CheckOption[RandomResult] = i;
		}else if (RandomResult == CheckOption[RandomResult]) { //reset
			i = -1;
			ResetArray(CheckOption, N);
		} 
		else {
			--i;
		}
	}
	for (i = 0; i < size; ++i) {
		for (KeyInCheckOption = 0; KeyInCheckOption < size; ++KeyInCheckOption) {
			if (CheckOption[KeyInCheckOption] == i) {
				farray[i] = KeyInCheckOption;
				KeyInCheckOption = size;
			}
		}
	}
	return;
}

void ResetArray(int Farray[], int size) { //create array
	int i;
	for (i = 0; i < size; ++i) {
		Farray[i] = -2;
	}
	return;
}

void PrintArray(int farray[], int size) { //print array by format
	int i;
	for (i = 0; i < size; ++i) {
		printf("%3d ",i);
	}
	printf("\n");
	for (i = 0; i < size; ++i) {
		printf("%3d ", farray[i]);
	}
	printf("\n");
	return;
}

void TrailSites(int farray[], int size) { // create trial for the amount of groups
	int i, MaxTravel = (size / C) -1, Travelpoint, StartPoint[C], StartPointIndex = 0;
	Travelpoint = rand() % size;
	StartPoint[StartPointIndex++] = Travelpoint;
	while(StartPointIndex != C) {
		int tempTravelpoint;
		for (i = 0; i < MaxTravel + 1; ++i) {
			Travelpoint = farray[Travelpoint];
			if (i == MaxTravel -1 ) {
				tempTravelpoint = Travelpoint;
			}
		}
		farray[tempTravelpoint] = -1;
		StartPoint[StartPointIndex++] = Travelpoint;
	}
	printf("The stating point will be:\n");
	PrintArray(StartPoint, C);
	return;
}*/