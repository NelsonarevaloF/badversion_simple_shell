#include "shell.c"

/**
 * eval - this function manages the others functions and make a
 * child process
 * @input: string that the user entered through standard input
 * Return: if success return 0, otherwise 1
 */
int eval(const char *input)
{
	char **tokens;
	pid_t pid;

	/*duplicate the input since strtok would modify it*/
	char *input_dup = _strcpy(input);

	int num_tokens = tokenize_line(input_dup, &tokens);

	if (num_tokens == 0)
		return (0);
	if (num_tokens < 0)
	{
		printf("Huge number of tokens\n");
		return (-1);
	}

	pid = fork();

	if (pid > 0)
	{
		int status;

		waitpid(pid, &status, 0);
		free(input_dup);
		free(tokens);
		if (WIFEXITED(status))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		execve(tokens[0], tokens, NULL);
	}
	return (0);
}
