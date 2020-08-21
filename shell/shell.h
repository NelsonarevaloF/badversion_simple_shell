#ifndef SHELL_H
#define SHELL_H

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void print_prompt();
int read_line(char **input);
void strip_line(char *line);
int eval(const char *input);
int tokenize_line(char *line, char ***tokens);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
