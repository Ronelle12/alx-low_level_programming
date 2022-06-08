#include "main.h"
/**
 * print_last_digit - prints the last the digit of a number
 * @n: input digits
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	else
		n = n * 1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
