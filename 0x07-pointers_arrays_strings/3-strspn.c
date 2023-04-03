#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 *
 * @s: Pointer char
 *
 * @accept: Pointer char
 *
 * Return: the length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	int i, f;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			f = 0;
			if (*s == accept[i])
			{
				c++;
				f = 1;
				break;
			}
		}
		if (!)
			break;
		s++;
	}
	return (c);
}
