#include <stdio.h>
#include <stdlib.h>
/**
 * main - print combinations of single digits
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num < 9)
	{
		putchar(',');
		putchar(' ');
	}
	else
		putchar('\n');
	}
	return (0);

}
