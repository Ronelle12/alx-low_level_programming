#include "main.h"
/**
 * print_line - draws a straight line  tha would be n characters long
 * @n: number of undersores to print
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
