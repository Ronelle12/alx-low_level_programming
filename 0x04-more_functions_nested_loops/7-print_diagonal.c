#include "main.h"
/**
 * print_diagonal - draws diagonal line across (n) terminal lines
 * @n: number of lines to print]
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 1; i <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i != 1)
					_putchar(' ');
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
