#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - checks a random input number and prints to scree
 * if it is positve, negative or zero
 **
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	/* prints when input is positive */
	printf("%d is positve\n", n);
	}
	else if (n < 0)
	{
	/* prints when input is negative */
	printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
	/* prinst when input is zero */
	printf("%d is zero\n", n);
	}

	return (0);
}
