#include "shell.h"

/**
 * get_line - gets string from statndard input and stores in a buffer
 * @line: buffer for the string to be stored
 *
 * Return: nmber of characters read, if errror returns -1;
 */
ssize_t get_line(char **line)
{
	char *buf = _calloc(8096, sizeof(char));
	ssize_t n = 0;

	while ((read(0, &buf[n], 1)) > 0 && (buf[n] != '\n'))
		n++;

	if (buf[n] == '\n')
	{
		*line = malloc(sizeof(char) * (n + 1));
		buf[n] = '\0';
		_strcpy(*line, buf);
		free(buf);
		return (n);
	}
	else if (n != 0)
	{
		buf[n] = '\0';
		*line = malloc(sizeof(char) * (n + 1));
		_strcpy(*line, buf);
		free(buf);
		return (-1);
	}
	else
	{
		if (isatty(0))
			_eprintf(1, "\n", "nill", 0, "nill");
		free(buf);
		exit(status);
	}
}