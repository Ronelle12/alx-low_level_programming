#include "main.h"
#include <stdlib.h>
/**
 * checker - returns the natural square root of a number
 * @n: given number
 * @base: number to check
 * Return: natural square root of numbers
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - return the natural square root of a nummber n
 * @n: number to check for square roots
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
