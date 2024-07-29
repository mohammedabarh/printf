#include "main.h"

/**
 * _strlen - Finds the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int c = 0;

	if (s == NULL)
		return (print_err());
	while (s[c] != '\0')
		c++;
	return (c);
}
