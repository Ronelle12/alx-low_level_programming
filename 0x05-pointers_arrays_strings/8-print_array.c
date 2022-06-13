#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: array of elements
 * @n: number of elements pf the array *a
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < 0)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');

}
