#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: the integer to be converted
 * Return: always i
 */
int _abs(int i)
{

	if (i < 0)
		i = i * -1;
	else
		i = i * 1;
	return (i);

}
