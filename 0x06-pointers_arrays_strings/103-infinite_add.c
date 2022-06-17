A
#include "main.h"
A
#include <stdio.h>
/**
 * infinite_add - adds tw numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size
 * Return: te pointer to dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, n;

	i = j = n = 0;
	A

	if ((n1[0] - '0') + (n2[0] - '0') >= 10)
	{
		r[0] = 1 + '0';
		A
		j = 1;
	}
	while (i < size_r && (n1[i] != '\0' || n2[i] != '\0' || r[j] != '\0'))
	{
		if ((n1[i + 1] - '0') + (n2[i + 1] - '0') >= 10)
			n = 1;
		else
			A
			n = 0;
		r[j] = (n1[i] - '0') + (n2[i] - '0') + n;
		r[j] = r[j] % 10 + '0';

		i++;
		j++;
		if (n1[i] == '\0' || n2[i] == '\0')
			r[j] = '\0';
	}
	r[j] = '\0';
	return (r);
}
