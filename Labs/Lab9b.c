#include  <stdio.h>
#include <conio.h>

#define R 5
#define C 5

void GetTwoDimensionalArry(int FTDarray[][C], int Row, int column);
void PrintTwoDimensionalArry(int FTDarray[][C], int Row, int column);
int IsSumRow(int FTDarray[][C], int column);
int IsSlanPositive(int FTDarray[][C], int Row, int column);// declareing fanctions

int main()
{
	int TDarray[R][C];
	//int TDarray[R][C] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
	GetTwoDimensionalArry(TDarray, R, C);

	PrintTwoDimensionalArry(TDarray, R, C);// calling fanctions

	if ( IsSlanPositive(TDarray, R, C) == 0|| IsSumRow(TDarray, C) == 0) printf("ERROR");// checking if error
	else  printf("Successes");
	



	getch();
	return 0;
}

void GetTwoDimensionalArry(int FTDarray[][C], int Row, int column)// declaring fanction witch gets input to two dimensional array
{

	int r, c;
	printf("Please enter a two dimensional array  which is %dx%d: ",R,C );
	for (r = 0; r < Row; r++) {
		for (c = 0; c < column; c++)
			scanf("%d", &FTDarray[r][c]);
		//printf("\n");
	}


}
int IsSumRow(int FTDarray[][C], int column) // declaring fanction withch checks if sum of row equles row number
{
	int i, sum = 0, row;
	printf("Please choose which row to check ");
	scanf("%d", &row);
	for (i = 0; i < column; i++)
		sum += FTDarray[row][i];

	if (sum == row) return 1;
	return 0;
}

int IsSlanPositive(int FTDarray[][C], int Row, int column)// declaring fanction witch checks if the slant is posetive 
{
	int r, c = 0;

	for (r = 0; r < Row; r++, c++)
		if (FTDarray[r][c] <= 0) return 0;

	return 1;
}

void PrintTwoDimensionalArry(int FTDarray[][C], int Row, int column)// declaring fanction witch prints two dimensional array
{
	int r, c;
	for (r = 0; r < Row; r++) {
		for (c = 0; c < column; c++)
			printf(" %3d", FTDarray[r][c]);
		printf("\n");
	}
}