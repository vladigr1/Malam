#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	double x, result;//define varibles
	printf("Enter x please: ");//requsting input
	scanf("%lf", &x);
	result = x + pow((1.0/3 * pow(x, 4) + 2 * pow(x, 1.0 / 2)), 1.0 / 5); //calculate result
	printf("x+(1/3x^4+2x^(1/2))^(1/5) = %g+(1/3*%g^4+2*%g^(1/2))^(1/5) = %.4f", x, x, x, result);// printing result
	getch();
	return 0;
}