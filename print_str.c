#include "main.h"
/**
 * print_str - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int print_str(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
<<<<<<< HEAD
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
=======
		return (print_err());
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);
	return (len);
>>>>>>> 77f8a1ad57f222d1d78a41e1015f01bda1cc606e
}
