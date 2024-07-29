#include "main.h"

/**
 * print_str - Prints a string.
 * @s: the string
 *
 * Return: The length of the string.
 */
int print_str(char *s)
{
	int i = 0;

	if (s == NULL)
		return (print_err());
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
