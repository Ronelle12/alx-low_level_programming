#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - reverses the contenet of an array of integeres
 * @a: the array to revrse
 * @n: size of elements in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;
	n -= 1
		while (i <= n)
		{
			temp = a[n];
			a[n--] = a[i];
			a[i++] = temp;
		}
}
