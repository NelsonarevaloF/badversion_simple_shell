#include "shell.h"

/**
 * strip_line - remove the character \n
 * @line: path of the program to execute
 * Return: if len returns 1, otherwise -1
 */
void strip_line(char *line)
{
	size_t len = _strlen(line);
	size_t end = len - 1;

	while (1)
	{
		if (line[end] == '\n')
			line[end] = '\0';
		if (end == 0)
			break;

		end--;
	}

	if (line[end] == '\n')
		line[end] = '\0';
}
