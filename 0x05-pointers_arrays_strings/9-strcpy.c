#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: points to string
 * @src: points to the buffer
 * Return: value of pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
