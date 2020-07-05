#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() 
{
	int  weight, height, resultBMI; //creating variables
	double BMI; //creating variables
	printf("Enter weight (kg) and height (cm) ==>\n"); //requsting input
	scanf("%d%d", &weight, &height); // reciving input  
	BMI = (double)weight / (pow(((double)height / 100),2)); //caculating 
	if (BMI < 18.5) printf("Underweight\n"); //chking condtion  and printing resulte 
	else if (BMI < 25) printf("Normal weight\n");
	else if (BMI < 30) printf("Increased weight\n");
	else if (BMI < 40) printf("Obese\n");
	else  printf("Very high obese\n"); 
	printf("Finish");//stating end of program  
	getch();
	return 0;  
	
}

