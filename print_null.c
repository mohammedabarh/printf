#include "main.h"
/**
 * print_null - print "null" in case there is an error
 * Return: void
 */
int print_null(void)
{
	char *s = "(null)";
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
