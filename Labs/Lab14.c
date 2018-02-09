#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLUMNS 10


void initRandomArray(int arr[][COLUMNS]);
void printArray(int arr[][COLUMNS]);
void SortColumns(int arr[][COLUMNS]);
void swapColumns(int arr[][COLUMNS], int col1, int col2);

int main()
{
	int arr[ROWS][COLUMNS];
	initRandomArray(arr);
	printArray(arr);
	SortColumns(arr);
	putch('\n');
	printArray(arr);
	_getch();
	return 0;
}

void initRandomArray(int arr[][COLUMNS])
{
	int i, j;
	srand(time(NULL));
	for (i = 0; i < ROWS; ++i)
		for (j = 0; j < COLUMNS; ++j)
			arr[i][j] = rand() % 21;
}

void printArray(int arr[][COLUMNS])
{
	int i, j;
	srand(time(NULL));
	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLUMNS; ++j)
			printf("%3d ", arr[i][j]);
		putch('\n');
	}

}

void SortColumns(int arr[][COLUMNS])
{
	int i, j, swapIndex, *supportArr, bubbleflag = 1;
	supportArr = (int *)malloc(ROWS * sizeof(int));
	if (supportArr == NULL)
	{
		printf(" Their isn`t enough memory for building the array.\n");
		return;
	}
	while (bubbleflag)
	{
		bubbleflag = 0;
		for (j = 0; j < COLUMNS - 1; ++j)
		{
			for (i = 0; i < ROWS; ++i)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					bubbleflag = 1;
					swapColumns(arr, j, j + 1);
				}
				if (arr[i][j] < arr[i][j + 1])
				{
					i = ROWS;
				}
			}
		}
	}
	free(supportArr);
}

void swapColumns(int arr[][COLUMNS], int col1, int col2)
{
	int swapIndex, *supportArr;
	supportArr = (int *)malloc(ROWS * sizeof(int));
	if (supportArr == NULL)
	{
		printf(" Their isn`t enough memory for building the array.\n");
		return;
	}
	for (swapIndex = 0; swapIndex < ROWS; ++swapIndex)
	{
		supportArr[swapIndex] = arr[swapIndex][col1];
		arr[swapIndex][col1] = arr[swapIndex][col2];
	}
	for (swapIndex = 0; swapIndex < ROWS; ++swapIndex)
	{
		arr[swapIndex][col2] = supportArr[swapIndex];
	}
	//printArray(arr, ROWS, COLUMNS);
	//putch('\n');
	free(supportArr);
}

