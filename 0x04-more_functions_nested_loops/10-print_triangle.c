#include "main.h"
/**
 * print_triangle - prints a triaangular shape using #'s
 * @size: the height of the triagle.
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{

				if (i < j)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');

		}
	}
		else
			_putchar('\n');
}
