#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a character in a string
 * @c: character to be checked
 * @s: string in which character is checked
 * Return: first occurence of c or NULL
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)

			return (s + 1);
		s++;
	}
	return (s + 1);
}
