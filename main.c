#include "shell.h"
/**
 * main - simple shell core function
 * Return: 0
 */

int main(void)
{
	int err = 0;

	do {
		char *input = 0;

		print_prompt();

		err = read_line(&input);

		if (err < 0)
			break;

		err = eval(input);

	} while (!err);

	return (0);
}
