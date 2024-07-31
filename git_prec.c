#include "main.h"
#include <ctype.h>

/**
 * git_prec - determines the precision for formatting
 * @format: The string that includes format specifications
 * @index: Position of the current character in the format string
 * @list: List of arguments
 *
 * Return: The computed precision value
 */
int git_prec(const char *format, int *index, va_list list)
{
	int pos = *index + 1;
	int precision_value = -1;

	if (format[pos] != '.')
		return (precision_value);

	precision_value = 0;
	pos++;

	while (format[pos] != '\0')
	{
		if (isdigit((unsigned char)format[pos]))
		{
			precision_value = precision_value * 10 + (format[pos] - '0');
		}
		else if (format[pos] == '*')
		{
			pos++;
			precision_value = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
		pos++;
	}

	*index = pos - 1;

	return (precision_value);
}

