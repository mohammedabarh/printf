#include "main.h"
/**
 * print_err - print "(nil)" if there is any error
 * Return: the length of "(nil)"
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
