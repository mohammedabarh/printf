#include "main.h"
/**
 * print_err - print "(null)" if there is any error
 * Return: the length of "(null)"
 */
int print_err(void)
{
	char *s = "(null)";
	int i, length;

	length = _strlen(s);
	for (i = 0; i < length; i++)
		_putchar(s[i]);
	return (length);
}
