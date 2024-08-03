#include "main.h"

/**
 * find_size - determines the size (length modifier) for formatting
 * @format: The string that includes format specifications
 * @i: Position of the current character in the format string
 * @val: Argument list to access any further parameters if needed
 *
 * Return: size value (1 for 'l', -1 for 'h', 0 for none, or
 *         any other dynamic size)
 */
int find_size(const char *format, int *i, va_list val)
{
	int size = 0;

	if (format[*i + 1] == 'l')
	{
		size = 1;
		(*i)++;
	}
	else if (format[*i + 1] == 'h')
	{
		size = -1;
		(*i)++;
	}
	else if (format[*i + 1] == '*')
	{
		size = va_arg(val, int);
		(*i)++;
	}

	return (size);
}

