#include "main.h"
/**
 * printw_flags - print string and handle flag '-' and 0
 * @n: the string to be printed after flags
 * @length: length of the string
 * @len: length of the string including flags
 * @f: pointer to the structure of flags
 * Return: length of printed characters
 */
int printw_flags(char *n, int length, int len, flags *f)
{
	size_t j, left_align, zero_pad, lead_zero;

	if (f->is_prec && f->prec > length)
	{
		lead_zero = f->prec - length;
		for (j = 0; j < lead_zero; j++)
			len += _putchar('0');
	}
	if (f->width <= length)
	{
		len += print_str(n);
		return (len);
	}
	if (f->zero && !f->minus)
	{
		zero_pad = f->width - length;
		for (j = 0; j < zero_pad; j++)
			len += _putchar('0');
	}
	len += print_str(n);
	if (f->minus == 1)
	{
		left_align = f->width - length;
		for (j = 0; j < left_align; j++)
			len += _putchar(' ');
	}
	return (len);
}
