#include "main.h"

/**
 * _strlen - prints lenghth of string
 *
 * @s: pointer to be used
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		len += 1;
		s += 1;
	}
	return (len);

}
