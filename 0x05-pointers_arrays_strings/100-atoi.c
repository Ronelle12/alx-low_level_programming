#include "main.h"
/**
 * _atoi - converst a string to an integer
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int i = 0, size = 0, o = 0, p = 1, m = 1, j;

	while (*(s + i) != '\0')
	{
		if (size > 0 && (*(s + i) < '0' || *(s + i) > '9'))
			break;

		if (*(s + i) == '-')
			p *= -1;

		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		i++;
	}

	for (j = i - size; j < i; j++)
	{
		o = o + ((*(s + j) - 48) * m);
		m /= 10;
	}
	return (o * p);
}
