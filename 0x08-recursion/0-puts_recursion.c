#include "main.h"

void printChar(char *s)
{
    if (!*s)
    {
        return;
    }
    _putchar(*s); 
    s++;
    printChar(s);
}
/**
 * _puts_recursion - a function that prints a string, followed by a new line
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
    printChar(s);
    _putchar('\n');
}
