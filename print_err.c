#include "main.h"
/**
 * print_err - print "(null)" if there is any error
 * Return: the length of "(null)"
 */
int print_err(void)
{
	char *s = "(null)", i, len;

	for (i = 0; i < _strlen(s); i++)
		len++;
	return (len);
}
