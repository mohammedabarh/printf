#include "main.h"

/**
 * print_s - Prints a string.
 * @s: the string
 *
 * Return: The length of the string.
 */
int print_str(char *s)
{
	int i, len = 0;

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);
	return (len);
}
