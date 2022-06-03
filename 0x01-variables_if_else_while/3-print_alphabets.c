#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints out the Alphabet in small letters then CAPS
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'Z'; n++)
	{
		puthchar(n);
	}

	putchar('\n');

	return (0);

}
