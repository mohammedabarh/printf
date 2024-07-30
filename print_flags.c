#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * _putchar - prints a character to stdout
 * @c: character to print
 */
void _putchar(char c)
{
	putchar(c);
}

/**
 * print_digits - prints the digits of a number
 * @n: number to print
 * Return: number of characters printed
 */
int print_digits(int n)
{
	int num = n;
	int exp = 1;
	int digit;
	int count = 0;

	/* Find the number of digits */
	while (num / exp > 0)
	{
		exp *= 10;
	}
	exp /= 10; /* Adjust exp to the highest place value */

	/* Print the digits */
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num %= exp;
		exp /= 10;
		count++;
	}

	return (count);
}

/**
 * print_d_i - prints integer or decimal with handling of flags and digits
 * @args: argument to print
 * @flags: flags for formatting
 * Return: integer
 */
int print_d_i(va_list args, char *flags)
{
	int n = va_arg(args, int);
	int i = 0;

	/* Handle sign and flags */
	if (n < 0)
	{
		_putchar('-');
		n = -n; /* Make n positive for further processing */
		i++;
	}
	else
	{
		if (strchr(flags, '+'))
		{
			_putchar('+');
			i++;
		}
		else if (strchr(flags, ' '))
		{
			_putchar(' ');
			i++;
		}
	}

	/* Special case for 0 */
	if (n == 0)
	{
		_putchar('0');
		return (i + 1);
	}

	/* Print digits */
	i += print_digits(n);

	return (i);
}

/**
 * print_d - prints integer or decimal
 * @args: argument to print
 * @flags: flags for formatting
 * Return: integer
 */
int print_d(va_list args, char *flags)
{
	return (print_d_i(args, flags));
}

/**
 * print_i - prints integer or decimal
 * @args: argument to print
 * @flags: flags for formatting
 * Return: integer
 */
int print_i(va_list args, char *flags)
{
	return (print_d_i(args, flags));
}

