#include "main.h"
#include <stdarg.h>

/**
 * print_rev - Function that prints a string in reverse.
 * @val: A va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_rev(va_list val)
{
	char *s = va_arg(val, char *);
	int i;
	int length = 0;

	if (s == NULL)
		s = "(null)";

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Print characters in reverse order */
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	return (length);
}

