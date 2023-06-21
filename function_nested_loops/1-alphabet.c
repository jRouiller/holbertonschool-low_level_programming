#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */

/*This is the void function that will print alphabet*/
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
