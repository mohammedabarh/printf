#include "main.h"
/**
 * print_S - handle custom specifier that deals with non-printable
 * characters (0 < ASCII value < 32 or >= 127)
 * @val: the argument(the non-printable character
 * Return: length of printed characters
 */
int print_S(va_list val)
{
	char *n;
	int i = 0, j, len = 0;

	n = va_arg(val, char*);
	if (n == NULL)
		return (0);
	while (n[i])
	{
		j = (unsigned char)n[i];
		if ((0 < j && j < 32) || j >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (j / 16 < 10)
				_putchar((j / 16) + '0');
			else
				_putchar((j / 16) - 10 + 'A');
			if (j % 16 < 10)
				_putchar((j % 16) + '0');
			else
				_putchar((j % 16) - 10 + 'A');
			len += 4;
		}
		else
		{
			_putchar(n[i]);
			len++;
		}
		i++;
	}
	return (len);
}
