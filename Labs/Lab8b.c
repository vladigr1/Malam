#include <stdio.h>	
#include <conio.h>


int inputThree(int *fnum1, int *fnum2, int *fnum3);
void sortTwo(int *fnum1, int *fnum2);
void sortThree(int *fnum1, int *fnum2, int *fnum3);

int main()
{
	
	int i,num1, num2, num3 ;
	inputThree(&num1, &num2, &num3);
	sortThree(&num1, &num2, &num3);
	printf("%d,%d,%d",num1, num2, num3);
	getch();
	return 0;
	
}



int inputThree(int *fnum1, int *fnum2, int *fnum3)
{
	int zerocounter = 0;
	    scanf("%d", fnum1);
		if (*fnum1 == 0) zerocounter++;
		scanf("%d", fnum2);
		if (*fnum2 == 0) zerocounter++;
		scanf("%d", fnum3);
		if (*fnum3 == 0) zerocounter++;	
	if (zerocounter == 3) return 0;
		return 1;
}



void sortTwo(int *fnum1, int *fnum2)
{
	int fholder = 0;
	if (*fnum1 > *fnum2) {
		fholder = *fnum1;
		*fnum1 = *fnum2;
		*fnum2 = fholder;
	}
}
	

void sortThree(int *fnum1, int *fnum2, int *fnum3)
{
	sortTwo(fnum1, fnum2);
	sortTwo(fnum2, fnum3);
	sortTwo(fnum1,fnum2);
	
}