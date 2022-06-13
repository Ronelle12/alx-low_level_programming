#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
