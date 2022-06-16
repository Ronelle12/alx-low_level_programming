#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[j] != '\0')
	{
		++j;
	}
	for (i = 0; src[i] != '\0'; ++i, ++j)
	{
		dest[j] = src[i];
		
	}
	dest[j] = '\0';
	return (dest);
}
