#include <stdio.h>
#include <stdlib.h>
/**
 * main - print literal screen to console
 *
 * Return: 0
 */
int main(void)
{
	char buffer[256] = "2015-10-19";

	printf("\"and that piec of art is useful\" - Dora Korpar, %c\n", buffer);

	return (0);

}
