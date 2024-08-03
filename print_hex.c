#include "main.h"
/**
 * print_hex_rem - find the remainders of num / 16
 * until num < 16
 * @num: the number to convert to hexadecimal
 * @s: the string to hold the number
 * @a: the index
 * Return: void
 */
void print_hex_rem(unsigned int num, char *s, unsigned int *a)
{
	if (num < 16)
	{
		if (num < 10)
			s[(*a)++] = num + '0';
		else
			s[(*a)++] = (num - 10) + 'a';
		s[(*a)] = '\0';
		return;
	}
	print_hex_rem(num / 16, s, a);
	if ((num % 16) < 10)
		s[(*a)++] = (num % 16) + '0';
	else
		s[(*a)++] = ((num % 16) - 10) + 'a';
}
/**
 * print_hex - custom conversion to hexadecimal
 * @val: the argument(number) to convert
 * @f: pointer to the structure of flags
 * Return: length of the printed numbers
 */
int print_hex(va_list val, flags *f)
{
	unsigned int num, i = 0;
	char *n;
	int len = 0, length;
	size_t j, left_align, zero_pad;

	num = va_arg(val, unsigned int);
	n = malloc(33 * sizeof(char *));
	if (n == NULL)
	{
		free(n);
		return (-1);
	}
	print_hex_rem(num, n, &i);
	if (f->hash == 1 && n[0] != '0')
		len += print_str("0x");
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
	return (len);
}
