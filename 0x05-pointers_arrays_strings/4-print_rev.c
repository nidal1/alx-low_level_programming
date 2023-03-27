#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: pointer to string
 *
 * Return: none
 */
void print_rev(char *s)
{
	int i, len;

	if (*s != '\0')
	{
		len = _strlen(s);
		for (i = len- 1; i >= 0; i--)
			_putchar(*(s + i));
	}
	_putchar('\n');
}
