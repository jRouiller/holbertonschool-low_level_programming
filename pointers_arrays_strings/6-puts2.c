#include "main.h"
/**
 *puts2 - main function
 *@str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
