/*
{	{7,9,8,1,5,4,6,2,3}
,{2,1,6,9,3,8,4,5,7}
,{4,5,3,2,6,7,8,9,1}
,{6,8,9,7,2,1,5,3,4}
,{1,3,2,4,8,5,9,7,6}
,{5,4,7,3,9,6,1,8,2}
,{9,6,1,8,7,3,2,4,5}
,{8,7,4,5,1,2,3,6,9}
,{3,2,5,6,4,9,7,1,8}	};

{	{ 2, 4, 8, 3, 9, 5, 7, 1, 6 },
{ 5, 7, 1, 6, 2, 8, 3, 4, 9 },
{ 9, 3, 6, 7, 4, 1, 5, 8, 2 },
{ 6, 8, 2, 5, 3, 9, 1, 7, 3 },
{ 3, 5, 9, 1, 7, 4, 6, 2, 8 },
{ 7, 1, 4, 8, 6, 2, 9, 5, 3 },
{ 8, 6, 3, 4, 1, 7, 2, 9, 5 },
{ 1, 9, 5, 2, 8, 6, 4, 3, 7 },
{ 4, 2, 7, 9, 5, 3, 8, 6, 1 }	};

{{2,4,1,6,9,5,3,8,7}
,{7,3,5,4,2,8,1,6,9}
,{8,6,9,7,3,1,4,2,5}
,{4,1,3,8,7,9,2,5,6}
,{6,9,2,5,1,3,7,4,8}
,{5,8,7,2,4,6,9,3,1}
,{1,7,8,3,6,4,5,9,2}
,{9,5,4,1,8,2,6,7,3}
,{3,2,6,9,5,7,8,1,4}};

{{4,3,2,1}
,{2,1,4,3}
,{1,4,3,2}
,{3,2,1,4}};

{{16,2,3,13,4,14,15,1,9,7,6,12,5,11,10,8}
,{5,11,10,8,9,7,6,12,16,2,3,13,4,14,15,1}
,{9,7,6,12,5,11,10,8,4,14,15,1,16,2,3,13}
,{4,14,15,1,16,2,3,13,5,11,10,8,9,7,6,12}
,{13,3,2,16,1,15,14,4,12,6,7,9,8,10,11,5}
,{8,10,11,5,12,6,7,9,13,3,2,16,1,15,14,4}
,{12,6,7,9,8,10,11,5,1,15,14,4,13,3,2,16}
,{1,15,14,4,13,3,2,16,8,10,11,5,12,6,7,9}
,{3,16,13,2,15,4,1,14,6,9,12,7,10,5,8,11}
,{10,5,8,11,6,9,12,7,3,16,13,2,15,4,1,14}
,{6,9,12,7,10,5,8,11,15,4,1,14,3,16,13,2}
,{15,4,1,14,3,16,13,2,10,5,8,11,6,9,12,7}
,{2,13,16,3,14,1,4,15,7,12,9,6,11,8,5,10}
,{11,8,5,10,7,12,9,6,2,13,16,3,14,1,4,15}
,{7,12,9,6,11,8,5,10,14,1,4,15,2,13,16,3}
,{14,1,4,15,2,13,16,3,11,8,5,10,7,12,9,6}};
*/

/*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


#define N 9
#define TRUE 1
#define FALSE 0


void PrintArray( int Sudouku[][N], int size );
int StrateCheck( int Sudoku[][N], int PossibleValueArray[], int SuSize, int  IfUp, int StartPoint );
void LineCheck ( int Sudoku[][N], int PossibleValueArray[], int SuSize );
void ColumneCheck ( int Sudoku[][N], int PossibleValueArray[], int SuSize);
void NArrayCheck ( int Sudoku[][N], int size );
int CheckSmallSquare ( int Sudoku[][N], int PossibleValueArray[], int SuSize, int StartRowPoint, int StartColPoint );
int CheckSquare ( int Sudoku[][N], int PossibleValueArray[], int SuSize );
int Checkdiagonal ( int Sudoku[][N], int PossibleValueArray[], int SuSize );
int MatchCheck ( int Sudoku[][N], int PossibleValueArray[], int SuSize, int StartRowPoint, int StartColPoint );
void RestArray ( int PossibleValueArray[], int PoSize );
int quitset ( int quittype );

int main (){
	int i = 0, result = 1;
	int PossibleValueArray[N + 1] = { 0 };							//list of number that possible
	int S1[N][N] =
	{ { 2,4,1,6,9,5,3,8,7 }
		,{ 7,3,5,4,2,8,1,6,9 }
		,{ 8,6,9,7,3,1,4,2,5 }
		,{ 4,1,3,8,7,9,2,5,6 }
		,{ 6,9,2,5,1,3,7,4,8 }
		,{ 5,8,7,2,4,6,9,3,1 }
		,{ 1,7,8,3,6,4,5,9,2 }
		,{ 9,5,4,1,8,2,6,7,3 }
	,{ 3,2,6,9,5,7,8,1,4 } };
	puts ( "  The entered Sudoku: " );
	PrintArray ( S1, N );//											//call print suduku
	NArrayCheck ( S1, N );
	LineCheck ( S1, PossibleValueArray, N );
	ColumneCheck ( S1, PossibleValueArray,N);
	result = CheckSquare ( S1, PossibleValueArray, N, 0, 0 );
	if(result == 0) {
		puts ( "duplicate Value is in Small Square Check:\n" );
		quitset ( result );
	}
	result = Checkdiagonal ( S1, PossibleValueArray, N );
	if(result == 0) {
		puts ( "duplicate Value is in Diagonal Check:\n" );
		quitset ( ++result );
	}
	quitset ( ++result );
}


void PrintArray ( int Sudoku[][N], int size )
//definition for printing call
{
	int i, j;
	for(i = 0; i < size; ++i){
		for(j = 0; j < size; ++j){
			printf ( "%3d", Sudoku[i][j] );
		}
		putch ( '\n' );
	}
}

void RestArray ( int PossibleValueArray[], int PoSize )
//set the array values 0
{
	int i;
	for(i = 0; i <= PoSize; ++i) {
		PossibleValueArray[i] = 0;
	}
	return;
}

int MatchCheck ( int Sudoku[][N], int PossibleValueArray[], int SuSize, int StartRowPoint, int StartColPoint )
//general match check
{
	if(PossibleValueArray[Sudoku[StartRowPoint][StartColPoint]] == 0) {
		++PossibleValueArray[Sudoku[StartRowPoint][StartColPoint]];
	} else if(PossibleValueArray[Sudoku[StartRowPoint][StartColPoint]] == 1) {
		printf ( "\nThere is a duplicate Value, and it is : %d \n", Sudoku[StartRowPoint][StartColPoint] );
		return 0;
	} else {
		printf ( "Error Accured\n" );
		return 0;
	}
	return 1;
}

int StrateCheck ( int Sudoku[][N], int PossibleValueArray[], int SuSize, int  IfUp, int StartPoint )
//genral strate check for up down left right
//need clean possiblevalue array after each row
{
	int i, j, *step, result;
	i = IfUp == 1 ? 0 : StartPoint;
	j = IfUp == 0 ? 0 : StartPoint;
	step = IfUp == 1 ? &i : &j;
	for(step; *step < SuSize; ++(*step)) {
		result = MatchCheck ( Sudoku, PossibleValueArray, SuSize, i, j );
		if(result == 0){
			return result;
		}
	}
	return result;
}

void NArrayCheck ( int Sudoku[][N], int size )
//check if their is value which is out size that allowed
{
	int i, j;
	for(i = 0; i < size; ++i){
		for(j = 0; j < size; ++j){
			if(Sudoku[i][j] > size){
				printf ( "Their is value bigger then it allowed\n" );
				quitset ( 0 );
			}
		}
	}
}

int CheckSmallSquare ( int Sudoku[][N], int PossibleValueArray[], int SuSize, int StartRowPoint, int StartColPoint )
//if RequestRst is 1 he rest possible value every run
{
	int i, runtime = sqrt ( SuSize ), result = 1;
	for(i = 0; i < runtime; ++i){
		result = StrateCheck ( &(Sudoku[StartRowPoint][StartColPoint]), PossibleValueArray, runtime, FALSE, i );
		if(result == 0){
			RestArray ( PossibleValueArray, SuSize );
			return result;
		}
	}
	RestArray ( PossibleValueArray, SuSize );
	return result;
}

int CheckSquare ( int Sudoku[][N], int PossibleValueArray[], int SuSize )
//sequence for check the inter sudoku squares matches build from CheckSmallSquare
{
	int i, j, skip = sqrt ( SuSize ), result = 1;
	for(i = 0; i < SuSize; i += skip){
		for(j = 0; j < SuSize; j += skip){
			result = CheckSmallSquare ( Sudoku, PossibleValueArray, SuSize, i, j );
			if(result == 0){
				RestArray ( PossibleValueArray, SuSize );
				return result;
			}
		}
	}
	RestArray ( PossibleValueArray, SuSize );
	return result;
}

int Checkdiagonal ( int Sudoku[][N], int PossibleValueArray[], int SuSize )
//check diagnael by using matchceck 
{
	int i, result = 1;
	for(i = 0; i < SuSize; ++i){
		result = MatchCheck ( Sudoku, PossibleValueArray, SuSize, i, i );
		if(result == 0){
			return result;
		}
	}
	RestArray ( PossibleValueArray, SuSize );
	putch ( '\n' );
	for(i = 0; i < SuSize; ++i){
		result = MatchCheck ( Sudoku, PossibleValueArray, SuSize, i, SuSize - 1 - i );
		if(result == 0){
			return result;
		}
	}
	return result;
}
int quitset ( int quittype )
//genrate the quit messege that need for the moment and return value to quit
{
	switch(quittype){
	case 2:
		printf ( "The Sudoku is properly set and he is diagonal\n" );
		_getch ();
		exit ( 1 );
		break;
	case 1:
		printf ( "The Sudoku is properly set and its not diagonal\n" );
		_getch ();
		exit ( 1 );
		break;
	case 0:
		printf ( "The Sudoku isnt properly set\n" );
		_getch ();
		exit ( 1 );
		break;
	}
}
void LineCheck ( int Sudoku[][N], int PossibleValueArray[], int SuSize)
//work with stratecheck and check all line in the sudoku
{
	int result = 1, i = 0;
	for(i = 0; i < N && result == 1; ++i){						
		result = StrateCheck ( Sudoku, PossibleValueArray, N, FALSE, i );
		RestArray ( PossibleValueArray, N );
		if(result == 0){
			puts ( "duplicate Value is in Raw Check:\n" );
			quitset ( result );
		}
	}
}

void ColumneCheck ( int Sudoku[][N], int PossibleValueArray[], int SuSize)	
//work with stratecheck and check all column in the sudoku
{
	int result = 1, i = 0;
	for(i = 0; i < N && result == 1; ++i){
		result = StrateCheck ( Sudoku, PossibleValueArray, N, TRUE, i );
		RestArray ( PossibleValueArray, N );
		if(result == 0){
			puts ( "duplicate Value is in Column Check:\n" );
			quitset ( result );
		}
	}
}
*/