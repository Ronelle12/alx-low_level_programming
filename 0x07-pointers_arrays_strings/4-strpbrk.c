#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - locates first occurence of character
 * @s: string to be checked
 * @accept: comparison string of bytes
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
