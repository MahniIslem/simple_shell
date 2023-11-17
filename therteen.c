#include "shell.h"

/**
 * pmpt_print - prints the prompt to standard output
 * @prompt: prompt to be printed
 *
 * Return: 0 in interactive mode and 1 in non interactive mode
 */
int pmpt_print(char *prompt)
{
	if (isatty(0))
		_ehandstr(1, prompt);

	return (0);
}
