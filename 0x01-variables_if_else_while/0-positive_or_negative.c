#include <stdlib.h>
#include <time.h>
/*
 *main - print if the number is positive, zero, negative
* betty style doc for function main goes there 
* */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
