#include "main.h"

/**
 * print_str - Prints a string.
 * @s: the string
 *
 * Return: The length of the string.
 */
int print_str(char *s)
{
	int i, len = 0;

	if (s == NULL)
		len = print_err();
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
	}
	return (len);
}
