#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints letters of the Alphabet with exceptions
 *
 * Return: 0
 */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		if (!(str == 'e' || str == 'q'))
			putchar(str);
	}
	putchar('\n');
	return (0);
}

