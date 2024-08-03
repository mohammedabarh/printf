#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * int_to_str - change an  integer number into a string
 * @a: the integer
 * @s: string to hold the integer
 * Return: character numbers
 */
char *int_to_str(int a, char *s)
{
	int i = 0, j, s_len, negative = 0, temp;

	if (a == INT_MIN)
		return ("-2147483648");
	if (a < 0)
	{
		negative = 1;
		a = -a;
	}
	do {
		s[i] = (a % 10) + '0';
		a = a / 10;
		i++;
	} while (a > 0);
	if (negative)
		s[i++] = '-';
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
 * print_int - print an integer
 * @val: arguments
 * @f: pointer to the structure of flags
 * Return: length of the integer
 */
int print_int(va_list val, flags *f)
{
	int  i = va_arg(val, int), len = 0, length;
	char *num, *n;
	size_t j, left_align, zero_pad;

	num = malloc(20);
	if (num == NULL)
	{
		free(num);
		return (-1);
	}
	n = int_to_str(i, num);
	if (f->space == 1 && f->plus == 0 && i >= 0)
		len += _putchar(' ');
	if (f->plus == 1 && i >= 0)
		len += _putchar('+');
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
