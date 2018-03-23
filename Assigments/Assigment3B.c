#include <stdio.h>
#include <conio.h>
//best switch ever
#define N 100


char *EndSequence (char startpoint[]);
void FixCharOrder (char start[], char destination[]);
void FixCapital (char destination[]);

int main ()
{
	char startarray[N], endarray[N] ;
	gets(startarray);
	FixCharOrder(startarray, endarray);
	FixCapital (endarray);
	puts(endarray);
	_getch ();
	return 0;
}

char *EndSequence (char startpoint[])
//to try find words with pointers with pointer
{
	int i;
	for(i = 0; startpoint[i] != startpoint[0]; ++i);
	return &startpoint[i];
}

void FixCharOrder (char start[], char destination[])
{
	int i, j = 0, flag = 0, capital = 1;
	for(i = 0; start[i] != 0;++i){
		switch(start[i]){
			case(','):
				flag = (flag == 3 || flag == 0) ? 1 : 4;
				break;
			case('.'):
				flag = (flag == 3 || flag == 0) ? 1 : 4;
				break;
			case(' '):
				flag = (flag == 0 || flag == 2 || flag == 3) ? 3 : 4;
				break;
			default:
				flag = (flag == 3) ? 2 : 0;
		}
		switch(flag){
			case 3:case 4:
			break;
			case 2:
				destination[j++] = ' ';
				destination[j++] = start[i];
				break;
			case 1:
				destination[j++] = start[i];
				destination[j++] = ' ';
				break;
			case 0:
				destination[j++]= start[i];
				break;
		}
	}
	destination[j] = 0;
}

void FixCapital (char destination[])
{
	int i, dotflag =0;
	destination[0] = (destination[0] >= 97 && destination[0] <= 122) ? destination[0] - 32 : destination[0];
	for(i = 1; destination[i] != 0; ++i){
		destination[i] = (destination[i] >= 65 && destination[i] <= 90) ? destination[i] + 32 : destination[i];
		dotflag = (destination[i] == '.') ? -2 : ++dotflag;
		destination[i] = (dotflag == 0 && destination[i] >= 97 && destination[i] <= 122) ? destination[i] - 32 : destination[i];
	}
}