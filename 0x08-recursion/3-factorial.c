#include "main.h"
#include <stdlib.h>
/**
 * factorial - returns factorial of given number
 * @n: given number
 * Return: nothing
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
