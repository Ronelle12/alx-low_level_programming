#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates a substring
 * @needle: substring to be checked
 * @haystack: string whhere occurence is checked in
 * Return: beginnig of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *first, *compare;

	while (*haystack)
	{
		first = haystack;
		compare = needle;
		while (*haystack && *compare && *haystack == *compare)
		{
			haystack++;
			compare++;
		}
		if (!*compare)
		{
			return (first);
		}
		else
		{
			haystack = first + 1;
		}
	}
	return (NULL);
}
