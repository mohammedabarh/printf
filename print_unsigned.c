#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer.
 * @args: Argument to print.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(va_list args)
{
	unsigned int n;
	unsigned int num;
	unsigned int digit;
	int exp;
	int i;

	n = va_arg(args, unsigned int);
	num = n;
	exp = 1;
	i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num / 10 != 0)
	{
		exp *= 10;
		num /= 10;
	}

	while (exp > 0)
	{
		digit = n / exp;
		_putchar(digit + '0');
		n -= digit * exp;
		exp /= 10;
		i++;
	}

	return (i);
}

