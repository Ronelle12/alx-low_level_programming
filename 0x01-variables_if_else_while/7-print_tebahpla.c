#include <stdio.h>
#include <stdlib.h>
/**
 *  main - prints the alhabet in reverse
 *
 *  Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
