#include "main.h"
#include <stdarg.h>

/**
 * print_rev - Outputs a string in reverse order.
 * @val: A va_list containing the string argument.
 * @f: pointer to the structure of flags
 * Return: The length of the string.
 */
int print_rev(va_list val, flags *f)
{
	char *string = va_arg(val, char *);
	int length = 0;
	int i;

	(void)f;
	if (string == NULL)
		return (-1);

	while (*(string + length) != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(*(string + i));

	return (length);
}

