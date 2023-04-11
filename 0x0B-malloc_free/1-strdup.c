#include "main.h"
#include <stdlib.h>

/**
 * _str_length - prints the length
 * @str: pointer to get length
 * Return: length of string
 */
int _str_length(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: copied string
 */
char *_strdup(char *str)
{
	char *strMemSize;
	char *_copy;

	if (!str)
		return (NULL);
	strMemSize = malloc((_str_length(str) + 1) * sizeof(char));
	if (!strMemSize)
		return (NULL);
	_copy = strMemSize;
	while (*str)
	{
		*_copy = *str;
		_copy++;
		str++;
	}
	*_copy = '\0';
	return (strMemSize);
}
