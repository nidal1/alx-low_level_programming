#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char swap;

	if (*s != '\0')
	{
		len = 0;
		while (*(s + len) != '\0')
		{
			len++;
		}
		i = 0;
		len = len - 1;
		while (i <= len)
		{
			swap = *(s + i);     /* swap = first */
			*(s + i) = *(s + len); /* first = last */
			*(s + len) = swap; /* last = swap (first) */
			i++;
			len--;
		}
	}
}
