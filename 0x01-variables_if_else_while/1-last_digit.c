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
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* you code goes there */
	a = n % 10;
	if (a > 5)
/* prints a value greater than 5 to the console */
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	else if (a == 0)
	/* prints the value zero to the console */
		printf("Last digit of %d is %d and is 0\n", n, a);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);

	return (0);

}
