#include "shell.h"

/**
 * _strlen - return the length the a string
 * @s: is the pointer the variable "n"
 * Return: Always 1 (Success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
return (i);
}

/**
 * _strcpy - function that copies the string pointed to by
 * src
 * @dest: char*
 * @src: char *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	*(dest + i) = '\0';
	return (dest);
}
