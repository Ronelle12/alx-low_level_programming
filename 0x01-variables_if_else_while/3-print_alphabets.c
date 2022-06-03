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

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);

}
