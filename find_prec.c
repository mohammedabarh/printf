#include "main.h"

/**
 * find_prec - determines the precision for formatting
 * @format: The string that includes format specifications
 * @i: Position of the current character in the format string
 * @val: List of arguments
 *
 * Return: precision value
 */
int find_prec(const char *format, int *i, va_list val)
{
	int n = *i + 1, prec_val = 0;

	while (format[n] != '\0')
	{
		if (isdigit((unsigned char)format[n]))
			prec_val = prec_val * 10 + (format[n] - '0');
		else if (format[n] == '*')
		{
			n++;
			prec_val = va_arg(val, int);
			break;
		}
		else
			break;
		n++;
	}

	*i = n - 1;
	return (prec_val);
}
