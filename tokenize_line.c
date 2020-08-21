#include "shell.h"
#define TOKEN_LIMIT 1024

/**
 * tokenize_line - divide a string
 * @line: string to divide
 * @tokens: the words will be stored here
 * Return: quantity of tokens
 */
int tokenize_line(char *line, char ***tokens)
{
	char *token;
	int num_tokens = 0;
	/*clear new lines*/

	strip_line(line);

	/*by default we support 1024 tokens. Plus one for final NULL pointer*/
	(*tokens) = (char **)malloc(sizeof(char *) * TOKEN_LIMIT);

	token = strtok(line, " ");

	while (token)
	{
		(*tokens)[num_tokens++] = token;

		/*token limit reached*/
		if (num_tokens == TOKEN_LIMIT)
			return (-1);

		token = strtok(NULL, " ");
	}
	return (num_tokens);
}
