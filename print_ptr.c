#include "main.h"
/**
 * print_ptr - print pointer/ address
 * @val: argument
 * Return: length of printed characters
 */
int print_ptr(va_list val)
{
	char c = va_arg(val, int);
	char *c_ptr = &c;
	int i = 0, len = 0;

	if (c_ptr == NULL)
		return (-1);
	_putchar('0');
	_putchar('x');
	len += 2;
	while (c_ptr[i] != '\0')
	{
		if (c_ptr[i] / 16 < 10)
			_putchar((c_ptr[i] / 16) + '0');
		else
			_putchar((c_ptr[i] / 16) - 10 + 'a');
		if (c_ptr[i] % 16 < 10)
			_putchar((c_ptr[i] % 16) + '0');
		else
			_putchar((c_ptr[i] % 16) - 10 + 'a');
		len += 2;
		i++;
	}
	return (len);
}
