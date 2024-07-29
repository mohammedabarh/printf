#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to print
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_binary - Outputs the binary form of an unsigned integer.
 * @val: A va_list containing the unsigned integer to be converted and printed.
 *
 * Return: The count of characters that were printed to the output.
 */
int print_binary(va_list val)
{
	int printed_chars = 0;
	int leading_zero = 0;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int p;
	int bit_position;

	for (bit_position = 31; bit_position >= 0; bit_position--)
	{
		p = 1U << bit_position;
		if ((number & p) != 0)
		{
			leading_zero = 1;
			_putchar('1');
			printed_chars++;
		}
		else if (leading_zero)
		{
			_putchar('0');
			printed_chars++;
		}
	}

	if (printed_chars == 0)
	{
		_putchar('0');
		printed_chars = 1;
	}

	return (printed_chars);
}

