#include "main.h"
/**
 * _islower - checks for a lowcase char
 *
 * Return: 1 if c is lower case otherwise 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
