#include "main.h"
#include <stdio.h>
/**
 * _strlen -  return length of string
 * @s: the pointer of the car array
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
