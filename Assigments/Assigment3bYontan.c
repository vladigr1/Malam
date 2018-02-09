/*#include <stdio.h>
#include <conio.h>
#include <string.h>

#define N 100
// function declartions 
int getstring (char Fstring[], int FsizeOfstring);
void printstring (char Fstring[], int FsizeOfstring);
void spaceFIX (char Fstring[], char Fstringdest[]);
void CapitalLettersFIX (char Fstring[], char Fstringdest[]);
void extraWordsFIX (char Fstring[], char Fstringdest[]);


//main 
int main ()
{
	int inputlength, p = 0;
	char string[N] = { 0 }, stringCpy[N] = { 0 }, stringzero[N] = { 0 }, stringzero2[N] = { 0 };

	inputlength = getstring (string, N);//calling functions
	spaceFIX (string, stringCpy);
	CapitalLettersFIX (stringCpy, stringzero);
	extraWordsFIX (stringzero, stringzero2);
	printf ("The corrected sentence is:\n"); // printing result
	printstring (stringzero2, N);

	getch ();
	return 0;
}

//  function definitions

int getstring (char Fstring[], int FsizeOfstring)//  gets string input- returns input length
{
	int i;
	printf ("Please enter a sentence:\n");
	for(i = 0; i < FsizeOfstring - 1; i++){
		//scanf("%c", &Fstring[i]);
		Fstring[i] = getchar ();
		//printf("%c",Fstring[i]);
		if(Fstring[i] == '\n'){ Fstring[i] = '\0'; return(i + 1); }
	}
	return(i + 1);
}


void printstring (char Fstring[], int FsizeOfstring)
{ // prints strings
	int i;
	for(i = 0; Fstring[i] != '\0'; i++)
		printf ("%c", Fstring[i]);

	printf ("\n");
	return;
}


void spaceFIX (char Fstring[], char Fstringdest[])
{

	int i = 0, j = 0, temp = 0, temp2 = 0, cnt = 0, FsizeOfstring = strlen (Fstring) ;

	temp = strlen (Fstring);
	if(Fstring[temp - 1] != '.' && temp < FsizeOfstring - 1){//making sure there is apoint the end of every sentence
		Fstring[temp] = '.';
		Fstring[temp + 1] = '\0';
	}

	if(Fstring[0] == ' ')// making sure there is no space in the beginning of a sentance
	{


		while(Fstring[i] == ' '){
			i++;
		}

		while(Fstring[i] != 0){
			Fstring[j] = Fstring[i];
			i++;
			j++;
		}


		while(i == FsizeOfstring && j < FsizeOfstring){

			Fstring[j] = '\0';
			j++;
		}
	}

	for(i = 0; Fstring[i] != '\0'; i++) // making sure there are no extra spaces between words and the existence of spaces after ',' and no space befor ,
	{
		if(Fstring[i] == ' '&&Fstring[i + 1] == ' ' || Fstring[i] == ' '&&Fstring[i + 1] == ','){
			temp = i;
			while(Fstring[i + 1] != '\0'){
				Fstring[i] = Fstring[i + 1];
				i++;
			}
			Fstring[i] = '\0';
			i = temp;
			--i;
			;
		}

		if(i != 0 && Fstring[i] == '.' && Fstring[i + 1] != '\0')//making sure there are no '.' in the middel of the sentances 
		{
			Fstring[i] = ',';
		}
		if(Fstring[i] == ','&& Fstring[i + 1] != ' '&& cnt != -1){

			j = strlen (Fstring);
			while(j != i && cnt != -1){
				Fstring[j + 1] = Fstring[j];
				j--;
			}
			i++;
			Fstring[i] = ' ';

		}

		if(Fstring[i] == ' '&& Fstring[i + 1] == '.'){
			temp = i;
			while(Fstring[i + 1] != '\0'){
				Fstring[i] = Fstring[i + 1];
				i++;
			}
			Fstring[i] = '\0';
			i = temp;
			--i;
		}

	}
	strcpy (Fstringdest, Fstring);
	return;
}


void CapitalLettersFIX (char Fstring[], char Fstringdest[])
{//makes sure only first letter is a  capital letter
	int i, j, FsizeOfstring = strlen (Fstring);
	if(Fstring[0] <= 'z' && Fstring[0] >= 'a')Fstring[0] -= 32;

	for(i = 1; i<FsizeOfstring; i++){
		if(Fstring[i] <= 'Z' && Fstring[i] >= 'A')Fstring[i] += 32;

	}
	strcpy (Fstringdest, Fstring);
	return;
}

void extraWordsFIX (char Fstring[], char Fstringdest[])
{
	int i, n, u, j = 0, k = 0, comp1 = 0, comp2 = 0, cnt, FsizeOfstring = strlen (Fstring), check;
	Fstring[0] += 32;
	for(i = 0; i < FsizeOfstring; ++i){
		cnt = 0;
		check = 0;



		;		if((Fstring[i] == ' ' || i == 0) && (Fstring[i + 1] >= 'a' &&Fstring[i + 1] <= 'z' || Fstring[i + 1] >= 'A' &&Fstring[i + 1] <= 'Z')){// seraching for 2 words
			if(i == 0){ j = i; } else{ j = i + 1; }
			while(Fstring[j] != ' ' && Fstring[j] && ',' && Fstring[j] != '.' && Fstring[j] != '\0'){
				++j;
			}
			k = (j + 1);
			while(Fstring[k] != ' ' && Fstring[k] != ',' && Fstring[k] != '.' && Fstring[k] != '\0'){
				++k;
			}

			comp2 = (j + 1);// cheking if its is the same word
			if(i == 0){ comp1 = (i); } else{ comp1 = i + 1; }
			for(; comp1 < j && cnt != -1; ++comp1){
				if(Fstring[comp1] == Fstring[comp2]){ ++cnt; } //checking letters
				else{ cnt = -1; }
				comp2++;
			}
			if(i == 0){
				if(cnt == (j - i) && cnt == (k - j - 1)){

					check++;
				}
			} else{
				if(cnt == (j - i - 1) && cnt == (k - j - 1)){//checking amont of letters is the same

					check += 2;
				}
			}

			if(check > 0){



				u = 0;
				for(n = 0; n < FsizeOfstring; n++){//removing 2nd word if its the same word
					if(n<j + 1 || n>k - 1){
						Fstringdest[u] = Fstring[n];
						u++;

					}


				}
				strncpy (Fstring, Fstringdest, strlen (Fstringdest) + 2);
				i = 0;

				for(u = 0; Fstring[u] != '\0'; u++)
					Fstringdest[u] = 0;

				spaceFIX (Fstring, Fstringdest);
				i--;
			}

		}
	}
	Fstring[0] -= 32;
	strcpy (Fstringdest, Fstring);
	return;
}


*/