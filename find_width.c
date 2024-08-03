#include "main.h"

/**
 * find_width - determines the width for formatting
 * @format: The string that includes format specifications
 * @i: Position of the current character in the format string
 * @val: List of arguments
 *
 * Return: The computed width value
 */
int find_width(const char *format, int *i, va_list val)
{
	int n = *i + 1;
	int width_val = 0;

	while (format[n] != '\0')
	{
		if (isdigit((unsigned char)format[n]))
		{
			width_val = width_val * 10 + (format[n] - '0');
		}
		else if (format[n] == '*')
		{
			n++;
			width_val = va_arg(val, int);
			break;
		}
		else
		{
			break;
		}
		n++;
	}

	*i = n - 1;

	return (width_val);
}

