#include "main.h"

/**
 * print_sign - main function
 *
 * @n: char to comp
 *
 * Return: if n > 0 return 1, n < 0 return -1, n = 0 return 0
 *
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
