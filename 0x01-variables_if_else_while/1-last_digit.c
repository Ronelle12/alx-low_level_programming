#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints to screen the last number of the input
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int a = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* you code goes there */
	if (a > 5)
	{
/* prints a value greater than 5 to the console */
		a = n % 10;
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
/* prints the value zero to the console */
		a = n % 10;
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else if (a < 6 && a != 0)
	{
/* prints a value that is less than 6 and not 0 to the console */
		a = n % 10;
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);

}
