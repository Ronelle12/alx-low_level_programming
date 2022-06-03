#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints Base 16
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char ch = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	while (ch < 'g')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
