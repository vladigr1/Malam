#include<stdio.h>
#include <conio.h>
#include <math.h>

unsigned int build(unsigned int num, unsigned int mask);
//function declarations
int SizeOfUsignedInt(unsigned int num);

int main()
{
	int i;
	for (i = 0; i<4; ++i) 
	{
		unsigned int mask, num;
		printf("Enter natural number for masking: ");
		scanf("%u", &num);
		printf("Enter binery masking number: ");//input 
		scanf("%u", &mask);
		
		printf("After applying mask %u on to %u we got %u\n", mask, num, build(num, mask)); //calling function+ printing

	}
	getch();
	return 0;
}
//function definitions
unsigned int build(unsigned int num, unsigned int mask) // were mask is zero so will num be 
{
	int digitsMask=SizeOfUsignedInt(mask),digitsNum=SizeOfUsignedInt(num);
	if (digitsNum != digitsMask){
		if (digitsNum > digitsMask)	{num = num % (int)pow(10,digitsMask);}
	 
	}
	
	if (mask % 10 == 0)// zero were there is zero 
{

		if (digitsMask == 1) return num*mask;//in case mask is zero
		return 0 + 10*build(num/10 , mask/10);
	}

	if (digitsMask == 1) return num;//ending 

	return num%10+  10*build(num / 10, mask / 10);
}



int SizeOfUsignedInt(unsigned int num) // calculating unsigned digits
{
	int i;
	for (i = 0; i < 6; ++i)// int unsigned has no more then 5 digits 
		if (10 * pow(10, i) > num) return i + 1;
}