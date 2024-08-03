#include "main.h"
/**
 * uint_to_str - change an unsigned int into a string
 * @a: the unsigned int
 * @s: string to hold the unsigned int
 * Return: character numbers
 */
char *uint_to_str(unsigned int a, char *s)
{
	unsigned int i = 0, j, s_len = 0, temp;

	do {
		s[i] = (a % 10) + '0';
		a = a / 10;
		i++;
	} while (a > 0);
	s[i] = '\0';
	s_len = i;
	for (i = 0, j = s_len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	return (s);
}
/**
 * print_unsign - handle %u(unsigned) specifier
 * @val: the argument
 * @f: pointer to the structure of flags
 * Return: length of the printed argument
 */
int print_unsign(va_list val, flags *f)
{
	unsigned int i = va_arg(val, unsigned int), len = 0;
	char *num, *n;
	int length;
	size_t j, left_align, zero_pad;

	num = malloc(8);
	if (num == NULL)
	{
		free(num);
		return (-1);
	}
	n = uint_to_str(i, num);
	length = strlen(n);
	if (f->zero && !f->minus)
	{
		zero_pad = (f->width > length) ? (f->width - length) : 0;
		for (j = 0; j < zero_pad; j++)
			len += _putchar('0');
	}
	len += print_str(n);
	if (f->minus == 1)
	{
		left_align = (f->width > length) ? (f->width - length) : 0;
		for (j = 0; j < left_align; j++)
			len += _putchar(' ');
	}
	free(num);
	return (len);
}
