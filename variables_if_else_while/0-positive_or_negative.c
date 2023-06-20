#include <stdlib.h>
#include <time.h>

/*
 * Main - Assign assign a random number and define if it is positive or negative.
 *
 * Always return (0)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%s is negative", n);
	if (n == 0)
		printf("%s is positive", n);
	else 
		printf("%s is zero", n);
	return (0);
}
