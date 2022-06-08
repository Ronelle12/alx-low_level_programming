#include "main.h"
#include <stdio.h>
/**
 * main - computes and prints sum
 *
 * Return: 0
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
