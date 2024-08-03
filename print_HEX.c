#include "main.h"
/**
 * print_HEX_rem - find remainders of num / 16 until
 * num < 16 (print characters in uppercase)
 * @num: the number to convert to uppercase hexa
 * @s: the string to hold the converted number
 * @a: the index
 * Return: void
 */
void print_HEX_rem(unsigned int num, char *s, unsigned int *a)
{
	if (num < 16)
	{
		if (num < 10)
			s[(*a)++] = num + '0';
		else
			s[(*a)++] = (num - 10) + 'A';
		s[(*a)] = '\0';
		return;
	}
	print_HEX_rem(num / 16, s, a);
	if ((num % 16) < 10)
		s[(*a)++] = (num % 16) + '0';
	else
		s[(*a)++] = ((num % 16) - 10) + 'A';
}
/**
 * print_HEX - custom conversion to uppercase hexa
 * @val: the argument(the number) to be converted
 * @f: pointer to the structure of flags
 * Return: the length of the printed & converted number
 */
int print_HEX(va_list val, flags *f)
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
	print_HEX_rem(num, n, &i);
	if (f->hash == 1 && n[0] != '0')
		len += print_str("0X");
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
