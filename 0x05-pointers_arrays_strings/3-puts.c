#include "main.h"
#include <stdio.h>
/**
 * _puts - print string followed by newline
 *@str: input to put to screen
 *Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
