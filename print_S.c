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
	int i = 0, len = 0;
	unsigned char j;

	n = va_arg(val, char*);
	if (n == NULL)
		return (-1);
	while (n[i] != '\0')
	{
		j = (unsigned char)n[i];
		if ((0 < j && 32 > j) || 127 <= j)
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
