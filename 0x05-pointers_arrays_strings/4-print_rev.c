#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string
 * @s: value of string
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;

	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
