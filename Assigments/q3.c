#include <stdio.h>
#include <conio.h>

/*int main() {
	int letter = 0, radio = 0, televison = 0, news = 0, facebook = 0, exist = 0, print_order = 0;;
	printf("Enter answer (R-radio, T-tv, N-newspaper, F-facebook, * to finish)\n");

	while (scanf("%c", &letter) && !exist) {
		switch (letter) {
			continue;
		case ('R'):
			++radio;
		case ('T'):
			++televison;
			continue;
		case ('N'):
			++news;
			continue;
		case ('F'):
			++facebook;
			continue;
		case ('\n'):
			continue;
		case ('*'):
			exist = 1;

			for (int i = 0; i < 4; ++i) {
				print_order = radio;
				if (print_order < televison) print_order = televison;
				if (print_order < news) print_order = news;
				if (print_order < facebook) print_order = facebook;

				if (print_order == radio) {
					printf("radio: %d\n", radio);
					radio = -1;
				}
				else if (print_order == televison) {
					printf("television: %d\n", televison);
					televison = -1;
				}
				else if (print_order == news) {
					printf("news: %d\n", news);
					news = -1;

				}
				else if (print_order == facebook) {
					printf("facebook: %d\n", facebook);
					facebook = -1;
				}
			}
			continue;
		default:
			printf("Illegal input: %c\n",letter);
			exist = 1;
		}
	}
	
	getch();
	return 0;
}*/