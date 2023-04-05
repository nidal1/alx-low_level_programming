#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
    if (*s)
        _putchar(s);
    _putchar('\n');
}
