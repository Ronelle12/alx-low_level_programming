#include <stdio.h>
#include <stdlib.h>
/**
 *  main - looks at single decimal dgits and prints
 *
 *  Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
/* print input */
		putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);

}
