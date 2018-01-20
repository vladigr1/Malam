#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
/*

#define N  16
#define C  4

TreasureFinder(int Fsites[], int Fstratingpoit); // declartion 

int main()
{
	int i, I, goodpath = 0, sites[N], start[C], arrival[C];// creating variables
	srand(time(NULL)); // chooseing time as seed for rand



	printf("Enter the sites array: "); // requestin input- where is the nexsit and were  are the treaures 
	for (i = 0; i < N; ++i) //getting input by loop
		scanf("%d", &sites[i]);
	while (goodpath <= 0 && goodpath != -2) { // run as long as randome  strating point paths to treasure are cool and there is nothing wrong with the sites 
		goodpath = 0;

		for (i = 0; i < C && goodpath != -2; ++i) { // choosing randome starting locations for the pracipents of the race 
			start[i] = rand() % 16;
			arrival[i] = TreasureFinder(sites, start[i]);
			if (arrival[i] == -2) goodpath = -2; // if asite dose not lead to tresure end program  


		}
		for (I = 0; I<C && goodpath >= 0; ++I) {// making sure no two participants arrive at the same treasure 
			for (i = 0; i < C && goodpath != -1; ++i)
				if (arrival[i] == arrival[I] && i != I) {
					printf("Start: {");
					for (i = 0; i < C; ++i)
						if (i != C - 1) printf("%d ", start[i]);
						else printf("%d", start[i]); // so that when printing '}' will appear neer the number 

						printf("} Incorrect path !\n");
						goodpath = -1; //

				}
				else if (goodpath != -1) goodpath++;


		}
	}if (goodpath != -2) //dose not print if there is somting  wrong with  sites 
	{
		printf("Start: {");
		for (i = 0; i < C; ++i) {
			if (i != C - 1) printf("%d ", start[i]);
			else printf("%d", start[i]);
		}
		printf("} All paths are O.K.");
	}



	getch();
	return 0;
}

TreasureFinder(int Fsites[], int stratingpoit)// definieg afanction that finds were the treasure is  and ruturns its location , returns -2 if site dose not lead to tresure
{
	int currentlocation, tomach = 0, treasurelocation = -2;// creating variables
	currentlocation = stratingpoit;
	while (currentlocation != -1)
	{
		if (Fsites[currentlocation] == -1) treasurelocation = currentlocation; // is  there treasure in the nexst site?
		if (currentlocation == Fsites[currentlocation]) { //tests for false site array -
			printf("site dose not lead to treasure");
			currentlocation = -1;
		}
		else currentlocation = Fsites[currentlocation];
	}
	return treasurelocation;
}*/

