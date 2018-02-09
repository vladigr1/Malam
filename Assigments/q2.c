/*#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	int input, result=1, check_Triangular, check_perfect, sum_perfect = 1,
		check_armstrong = 0, check_power=0, check_digit, leftover_num;
	printf("Please enter a number: ");
	scanf("%d", &input);
	check_Triangular = input;
	leftover_num = input;

	for (int next_num = 1; check_Triangular > 0; ++next_num) {
		check_Triangular -= next_num;
	}
	check_Triangular = (check_Triangular == 0)?3:1; //if it triangular the var result will be 1(true)

	for (int next_divide = input / 2; next_divide > 1; --next_divide) {
		if (input % next_divide == 0) sum_perfect += next_divide;
	}
	check_perfect = (input - sum_perfect == 0)?5:1;

	for (int check_size = 1; check_size / input == 0; check_size *= 10) ++check_power;
	for (int next_num = 1; check_power > 1 && next_num <= check_power; ++next_num) {
		check_digit = leftover_num / (int)(pow(10,(check_power - next_num)));
		check_armstrong += pow(check_digit, check_power);
		leftover_num = leftover_num % (int)(pow(10, check_power - next_num));
	}
	check_armstrong = (input == check_armstrong) ?7:1;

	result *= check_armstrong * check_perfect * check_Triangular;
	if (result > 1){
		if (result % 3 == 0) printf("\n%d is check_Triangular number\n", input);
		if (result % 5 == 0) printf("\n%d is check_perfect number\n", input);
		if (result % 7 == 0) printf("\n%d is check_armstrong number\n", input);
	}else {
		printf("\n%d is a bad number", input);
	}
	
	getch();
	return 0;
}*/