#include "shell.h"

/**
 * _strcat - concatinates two strings
 * @dest: Destination of the string to be appended
 * @src: String appended to dest
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int counter = 0, i = 0;

	for (counter = 0; dest[counter]; counter++)
	{
	}

	for (i = 0; src[i]; i++)
	{
		dest[counter] = src[i];
		counter++;
	}
	return (dest);
}


/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination of the copied string
 * @src: source of the string to be copied to <dest>
 * Return: pointer to the updated string after copying (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len]; len++)
	{
	}

	for (i = 0; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


/**
 * _strdup - allocate & return memory for a string duplicate
 * @str: string to return a memory to its duplicate
 * Return: memory to the string duplicate
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++;

	dup = malloc(sizeof(char) * len);

	if (dup == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(dup + i) = *(str + i);
		i++;
	}

	return (dup);
}

/**
 * _strcmp - compares 2 strings
 * @s1: first string to be compared with
 * @s2: second string compared on/with first string
 * Return: 0 if equal, positive if s1 < s2, negative if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	i = res = 0;

	while (res == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		res = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (res);
}

/**
 * _strlen - returns the lenth of a string
 * @s: Paremeter to count
 * Return: length.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
	}
	return (i);
}

