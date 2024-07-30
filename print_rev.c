#include "main.h"
#include <stdarg.h>

/**
 * print_rev - Outputs a string in reverse order.
 * @val: A va_list containing the string argument.
 *
 * Return: The length of the string.
 */
int print_rev(va_list val)
{
	char *string = va_arg(val, char*);
	int length = 0;
	int i;

	if (string == NULL)
	{
		string = ")Null(";
	}
	while (*(string + length))
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(string + i));
	}
	return (length);
}

