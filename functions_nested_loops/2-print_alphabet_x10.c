#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}
/*This is a function prototype void*/
void print_alphabet_x10(void)
{
	int l, a;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
