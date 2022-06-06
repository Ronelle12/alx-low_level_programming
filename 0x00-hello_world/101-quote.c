#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - print literal screen to console
 *
 * Return: 0
 */
int main(void)
{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);

	return (1);

}
