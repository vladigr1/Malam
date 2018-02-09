#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  N 200
void getstring(char string[], int stringSize);
void printstring(char string[]);
char superLetter(char string[]);

int main()
{
	char string[N] = { 0 };
	getstring(string, N);
	//printstring(string);
	printf("%c",superLetter(string));
	_getch();
	return 0;


}

void getstring(char string[], int stringSize)
{
	int i,k=0;
	printf("Enter string: ");
	for (i = 0; i < stringSize; i++) {
		if (k == 0)string[i] = getchar();
		if (string[i] == '\n') {
			string[i] ='\0';
			k++;
		}
		if (string[i - 1] == '\0')
			string[i] = '\0';




	}
}


void printstring(char string[])
{
	int i;
	for (i = 0; i < (strlen(string) + 1); i++)
		printf("%c", string[i]);
}


char superLetter(char string[])
{
	if (string[0] != '\0') {
		int i, ind = 0, most = 0, abc[26] = { 0 };// (int*)calloc(26, sizeof(int));

		for (i = 0; i < strlen(string) + 1; i++)
		{
			switch (string[i]) {
			case 'a': case  'A':
				abc[0];
				break;
			case 'b': case  'B':
				++abc[01];
				break;
			case 'c': case  'C':
				++abc[2];
				break;
			case 'd': case  'D':
				++abc[3];
				break;
			case 'e': case  'E':
				++abc[4];
				break;
			case 'f': case  'F':
				++abc[5];
				break;
			case 'g': case  'G':
				++abc[6];
				break;
			case 'h': case  'H':
				++abc[7];
				break;
			case 'i': case  'I':
				++abc[8];
				break;
			case 'j': case  'J':
				++abc[9];
				break;
			case 'k': case  'K':
				++abc[10];
				break;
			case 'l': case  'L':
				++abc[11];
				break;
			case 'm': case  'M':
				++abc[12];
				break;
			case 'n': case  'N':
				++abc[13];
				break;
			case 'o': case  'O':
				++abc[14];
				break;
			case 'p': case  'P':
				++abc[15];
				break;
			case 'q': case  'Q':
				++abc[16];
				break;
			case 'r': case  'R':
				++abc[17];
				break;
			case 's': case  'S':
				++abc[18];
				break;
			case 't': case  'T':
				++abc[19];
				break;
			case 'u': case  'U':
				++abc[20];
				break;
			case 'v': case  'V':
				++abc[21];
				break;
			case 'w': case  'W':
				++abc[22];
				break;
			case 'x': case  'X':
				++abc[23];
				break;
			case 'y': case  'Y':
				++abc[24];
				break;
			case 'z': case  'Z':
				++abc[25];
				break;
			}
		}


		for (i = 0; i < 26; ++i)
			if (abc[i] > most) {
				most = abc[i];
				ind = i;
			}

		for (i = 0; i < strlen(string) + 1; ++i) {
			if (string[i] >= 'A'&& string[i] <= 'Z')
				string[i] += 32;
			if (abc[string[i] - 'a'] == abc[ind]) {
				{ return string[i]; }
			}
		}
	} printf("\nEmpty string");
	return 0 ;
}