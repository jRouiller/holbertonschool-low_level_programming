#include <stdio.h>
/**
 *  *main - start
 *   *Return: always 0
 *
 *
 */
int main(void)
{
	int vari;

	for (vari = 0 ; vari < 16 ; vari++)
	{
		if (vari < 10)
		{
			putchar(vari + '0');
		}
		else
		{
			putchar(vari - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
