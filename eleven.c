#include "shell.h"

/**
 * arr_free - a function that frees the memmory allocated to an array
 * @array: the array to be freed
 *
 * Return: void
 */
void arr_free(char **array)
{
	int i;

	if (!array)
		return;

	for (i = 0; array[i] != NULL; i++)
		free(array[i]);

	free(array);
}
