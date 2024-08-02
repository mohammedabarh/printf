#include "main.h"
/**
 * print_char - prints a character.
 * @val: arguments.
 * @f: pointer to the structure of flags
 * Return: integer.
 */
int print_char(va_list val, flags *f)
{
	char s;

	(void)f;
	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
