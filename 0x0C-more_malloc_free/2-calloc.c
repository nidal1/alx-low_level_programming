#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strMemSize;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	strMemSize = malloc(nmemb * size);
	if (strMemSize != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			strMemSize[i] = 0;
		return (strMemSize);
	}
	else
		return (NULL);
}
