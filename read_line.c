#include "shell.h"
/**
 * read_line - counts the values entered by the user
 * @input: pointer that stores the values entered by the user
 * Return: 0 if no value is entered. If succeed returns 1, otherwise -1
 */

int read_line(char **input)
{
	size_t len;

	int char_read = getline(input, &len, stdin);

	return (char_read);
}
