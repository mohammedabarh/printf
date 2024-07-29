#include "main.h"

/**
 * print_string - prints a string with non-printable characters escaped.
 * @val: argument list containing the string.
 * Return: number of characters printed.
 */
int print_string(va_list val)
{
	char *str;
	int index, total_length = 0;
	int char_value;

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(null)";
	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] < 32 || str[index] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			total_length += 2;
			char_value = str[index];
			if (char_value < 16)
			{
				_putchar('0');
				total_length++;
			}
			total_length += print_HEX_rem(char_value);
		}
		else
		{
			_putchar(str[index]);
			total_length++;
		}
	}
	return (total_length);
}

