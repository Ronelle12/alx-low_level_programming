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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
/* prints a value greater than 5 to the console */
		printf("The last digit of %d is %d and is greater than 5\n", n, a);
		int a = n % 10;
	}
	else if (n == 0)
	{
/* prints the value zero to the console */
		printf("The last digit of %d is %d and is 0\n", n, a);
		int a = n % 10;
	}
	else if (n < 6 && n != 0)
	{
/* prints a value that is less than 6 and not 0 to the console */
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, a);
		int a = n % 10;
	}
	return (0);

}
