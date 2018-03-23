/*#define FALSE  0
#define TRUE  1
int main() {
	int num; /* tested for primality 
	int limit;   /* check divisibility until here 
	int is_prime = TRUE;
	int i = 3;  /* initialize divisors 
	printf("Enter an integer number  :  ");
	scanf("%d", &num);
	if (num != 2 && num % 2 == 0)  is_prime = FALSE;
	else {
		limit = (int)sqrt(num);
		while (i <= limit && is_prime) {
			is_prime = (num % i);  /* if (num % i == 0) is_prime = FALSE; 
			i += 2;
		}    /* end of while 
	}   /*end of else 
	if (is_prime) printf("prime\n");
	else printf("not prime\n");
}*/