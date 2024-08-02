#include "main.h"
/**
 * print_pct - prints the char %
 * @val: arguments
 * @f: pointer to the structure of flags
 * Return: 1
 */
int print_pct(va_list val, flags *f)
{
	(void)val;
	(void)f;
	_putchar('%');
	return (1);
}
