#include <stdio.h>
#include <conio.h>
void inputPoint(float *x, float *y);
void inputSeg(float *x1, float *y1, float *x2, float *y2);
void setMidSeg(float x1, float y1, float x2, float y2, float *px, float *py); //declaration functions

int main()
{
	float x1, x2, y1, y2, xmiddle, ymiddle;
	inputSeg(&x1, &y1, &x2, &y2);//call func
	printf("The  middle point of: (%f , %f), (%f , %f)\n", x1, x2, y1, y2);
	setMidSeg(x1, y1, x2, y2, &xmiddle, &ymiddle); //call func
	printf("is: (%lf , %lf)", xmiddle, ymiddle);
	getch();
	return 0;
}

void inputPoint(float *x, float *y) //defention func for entering input of a point
{
	printf("Please enter X Y points by this order(they can be float): ");
	scanf("%f", x);
	scanf("%f", y);
}

void inputSeg(float *x1, float *y1, float *x2, float *y2)//defention func for entering input of a 2 point
{
	inputPoint(x1, y1);
	inputPoint(x2, y2);
}

void setMidSeg(float x1, float y1, float x2, float y2, float *px, float *py) //giving avrge point
{
	*px = (x1 + x2) / 2;
	*py = (y1 + y2) / 2;
}