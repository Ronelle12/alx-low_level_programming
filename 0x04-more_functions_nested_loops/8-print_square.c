#include "main.h"
/**
 * print_square - draws a square using multiple lines
 * @n: the number of hashes to print in a line
 * Return: 0
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar("\n');
}
