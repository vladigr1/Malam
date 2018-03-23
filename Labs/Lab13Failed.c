#include <stdio.h>
#include <conio.h>


int Fanc(int num, int mask);

int main()
{
	printf("Fanc: %d ", Fanc(234, 100));
	_getch();
	return 0;
}

int Fanc(int num, int mask)
{
	int result;
	if(mask < 10)
		return num*mask;
	result = Fanc(num / 10, mask / 10) * 10;
	return (mask % 10) ? result + (num % 10) : result;
}