#include <stdio.h>
#include <conio.h>

void func(char ch, int num); //declaring

int main()
{
	int num = 0;
	char ch = 'A';
	printf("Enter letter and number: "); //requesting input
	ch = getche(); // input char
	scanf("%d", &num); //input int
	func(ch,num); //func call
	getch();
	return 0;
}

void func(char ch, int num)  //func definition
{
	int raw , line;
	for(raw = num; raw >= 0; --raw)//prining colums
	{
		for (line = 0; line < raw; ++line)//prining raws
		{
			printf("%c", ch);
		}
		printf("\n"); //jumping to new raws
	}
}