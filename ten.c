#include "shell.h"

/**
 * Exit_st - exits the shell with a status
 * @st_exit: the exit status
 *
 * Return: exits the shell and other cases return 2
 */
int Exit_st(char *st_exit)
{
	if (!st_exit)
	{
		free(line);
		arr_free(command);
		exit(status);
	}

	status = _atoi(st_exit);

	if (status >= 0)
	{
		free(line);
		arr_free(command);
		exit(status);
	}

	_eprintf(2, "%a: %b: exit: ", shell, shell_index, "nill");
	_eprintf(2, "Illegal nmber: %a\n", st_exit, 0, "nill");

	return (2);
}
