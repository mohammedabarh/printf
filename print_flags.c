#include "main.h"
#include "print_helpers.h"

/**
 * print_d_i - prints integer or decimal
 * @args: argument to print
 * @flags: flags for formatting
 * Return: integer
 */
int print_d_i(va_list args, char *flags)
{
	int n = va_arg(args, int);
	int num = n;
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		i++;
	}
	else
	{
		i += handle_flags(flags);
	}

	if (num == 0)
	{
		_putchar('0');
		return (i);
	}

	int exp = get_exponent(num);
	print_number(num, exp, &i);

	return (i);
}

/**
 * print_d - calls print_d_i to print decimal
 * @args: argument to print
 * @flags: flags for formatting
 * Return: integer
 */
int print_d(va_list args, char *flags)
{
	return (print_d_i(args, flags));
}

/**
 * print_i - calls print_d_i to print integer
 * @args: argument to print
 * @flags: flags for formatting
 * Return: integer
 */
int print_i(va_list args, char *flags)
{
	return (print_d_i(args, flags));
}

