#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - Assign a random number and define if it is positive or negative.
 *
 * Always return (0)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%i is negative", n);
	if (n > 0)
		printf("%i is positive", n);
	if (n == 0)
		printf("%i is zero", n);
	return (0);
}
