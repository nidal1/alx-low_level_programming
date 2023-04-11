#include "main.h"
#include <stdlib.h>

/**
 * _length - returns length of string
 * @s: char string
 * Return: Length of string s
 */
int _length(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *strMemSize;
	char *_copy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strMemSize = malloc(sizeof(char) * (_length(s1) + _length(s2)) + 1);
	if (!strMemSize)
		return (NULL);
	_copy = strMemSize;
	while (*s1)
	{
		*_copy = *s1;
		_copy++;
		s1++;
	}
	while (*s2)
	{
		*_copy = *s2;
		_copy++;
		s2++;
	}
	*_copy = '\0';
	return (strMemSize);
}
