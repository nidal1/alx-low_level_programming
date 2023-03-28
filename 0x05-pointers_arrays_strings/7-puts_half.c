#include "main.h"

/**
 * puts_half - prints second half of a string
 *
 * @str: pointer to string
 *
 * Return: void 
 */
void puts_half(char *str)
{
	int i, len, half;

	if (*str != '\0')
	{
		len = 0;
		while (*(str + len) != '\0')
		{
			len++;
		}
		if (len % 2 == 0)
			half = len / 2;
		else
			half = len - (len - 1) / 2;
		i = half;
		if (len == 1)
			_putchar(*str);
		else
		{
			while (*(str + i) != '\0')
			{
				_putchar(*(str + i));
				i++;
			}
		}
	}
	_putchar('\n');
}
