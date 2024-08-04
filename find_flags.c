#include "main.h"

/**
 * find_flags - Analyze the format string for active flags.
 * @format: the string that includes format specifiers
 * @i: index of current character
 * @f: pointer to the structure of flags
 * @val: list of arguments
 *
 * Return: 1 if a flag is found, 0 if not
 */
int find_flags(const char *format, int *i, flags *f, va_list val)
{
	char s = format[*i];
	int n = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			n = 1;
			break;
		case ' ':
			f->space = 1;
			n = 1;
			break;
		case '#':
			f->hash = 1;
			n = 1;
			break;
		case '0':
			f->zero = 1;
			n = 1;
			break;
		case '-':
			f->minus = 1;
			n = 1;
			break;
		case '.':
			f->is_prec = 1;
			n = 1;
			break;
	}
	if (n == 1)
	{
		f->width = find_width(format, i, val);
		if (f->width && f->is_prec)
			f->prec = f->width;
		if (f->is_prec && f->width == 0)
			return (0);
	}
	return (n);
}
