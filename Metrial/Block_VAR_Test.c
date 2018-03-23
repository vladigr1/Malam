#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	for(i = 0; i < 10; ++i){
		int num = 0;
		printf("i: %d n: %d",i,num);
		putch('\n');
		num = i;
	}
	_getch();
	return 0;
}