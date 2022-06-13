#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: array of elements
 * @n: number of elements pf the array *a
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
		putchar('\n');

}
