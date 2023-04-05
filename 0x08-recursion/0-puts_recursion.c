#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
    _putchar(*s);
    _putchar('\n');
}
