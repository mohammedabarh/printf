#include "main.h"
/**
 * print_err - print "(null)" if there is any error
 * Return: the length of "(null)"
 */
int print_err(void)
{
	char *s = "(null)";
	int i, len = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		_putchar(s[i]);
		len++;
	}
	return (len);
}
