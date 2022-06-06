#include <stdio.h>
#include <stdlib.h>
/**
 *  main - prints a combination of different numbers to string, in twos
 *
 *  Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		if (!(i > j || i == j))
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		j = '0';

		i++;

	}
	return (0);

}
