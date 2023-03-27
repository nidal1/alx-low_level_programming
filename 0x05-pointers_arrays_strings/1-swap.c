#include "main.h"

/**
 * swap_int - swaps the value of *a to *b and *b to *a
 *
 * @a: pointer to int a
 *
 * @b: pointer to int b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
