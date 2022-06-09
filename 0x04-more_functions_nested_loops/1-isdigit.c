#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for numbers 1 to 9
 * @c: character to be checked
 * Return: 1 if c is number otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
