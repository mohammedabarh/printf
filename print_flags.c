#include "main.h"
/**
 * print_flags - handle flag '-' and 0
 * @n: the string to be printed after flags
 * @len: length of the string
 * @f: pointer to the structure of flags
 * Return: length of printed characters
 */
int print_flags(char *n, int len, flags *f)
{
	size_t j, left_align, zero_pad;
	int length;
	
	length = strlen(n); /* length of the string with no flags*/
	if (f->width <= length)
		return (len);
	if (f->minus == 1)
	{
		left_align = f->width - length;
		for (j = 0; j < left_align; j++)
			len += _putchar(' ');
	}
	else if (f->zero && !f->minus)
	{
		zero_pad = f->width - length;
		for (j = 0; j < zero_pad; j++)
			len += _putchar(0);
	}
	return (len);
}
