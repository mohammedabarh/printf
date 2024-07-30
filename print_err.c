#include "main.h"
/**
 * print_err - print "(null)" if there is any error
 * Return: the length of "(null)"
 */
int print_err(void)
{
	char *s = "(nil)";
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
