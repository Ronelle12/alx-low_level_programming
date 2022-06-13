#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: first value to swap
 * @b: second value to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}
