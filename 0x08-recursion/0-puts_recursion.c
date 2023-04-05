#include "main.h"

void printChar(char *s)
{
    _putchar(*s); 
}
/**
 * _puts_recursion - a function that prints a string, followed by a new line
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        printChar(s);
        *s++;
    }
    _putchar('\n');
}
