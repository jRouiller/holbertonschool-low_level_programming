#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)     
 */

int main(void)
{
	int n;

	srand(time(NULL));

	n = rand();


	if (n < 0)
	{
		printf("%d\n, is negative", n);
	} else f(n > 0)
	{
		printf("%d\n, is positive", n);
	} else
	{
		printf("%d\n, is zero", n);
	}

	return (0);
}
