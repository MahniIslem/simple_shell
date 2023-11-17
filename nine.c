#include "shell.h"

/**
 * _calloc - allocates memory to an array
 * @nmemb: nmber of array elements
 * @size: size of bytes to be alloctated to each nmemb elements
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
