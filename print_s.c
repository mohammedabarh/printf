#include "main.h"

/**
 * print_s - Prints a string.
 * @val: Argument.
 *
 * Return: The length of the string.
 */
int print_s(va_list val)
{
	char *s = va_arg(val, char *);
	int len = 0;

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (int i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}

	len = _strlen(s);
	for (int i = 0; i < len; i++)
		_putchar(s[i]);

	return (len);
}
