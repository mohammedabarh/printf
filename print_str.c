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
<<<<<<< HEAD
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
=======
		len = print_err();
>>>>>>> 819840a37f4527d223f9e366b3236d53e16978c8
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
<<<<<<< HEAD
		return (len);
	}
=======
		return (print_err());
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);
=======
	}
>>>>>>> 819840a37f4527d223f9e366b3236d53e16978c8
	return (len);
>>>>>>> 77f8a1ad57f222d1d78a41e1015f01bda1cc606e
}
