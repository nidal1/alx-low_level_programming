#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @a: the integer to check
 *
 * Return: the absolute value of integer
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	return (-a);
}
