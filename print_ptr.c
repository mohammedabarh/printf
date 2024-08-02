#include <stdint.h>
#include "main.h"
/**
 * print_ptr - print pointer/ address
 * @val: argument
 * @f: pointer to the structure of flags
 * Return: length of printed characters
 */
int print_ptr(va_list val, flags *f)
{
	void *c = va_arg(val, void*);
	int i = 0, j, n, len = 0;
	char hex[16];
	uintptr_t c_ptr;

	(void)f;
	if (c == NULL)
		return (print_err());
	_putchar('0');
	_putchar('x');
	len += 2;
	c_ptr = (uintptr_t)c;
	while (c_ptr > 0)
	{
		n = c_ptr % 16;
		hex[i++] = (n < 10) ? (n + '0') : (n - 10 + 'a');
		c_ptr = c_ptr / 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
		len++;
	}
	return (len);
}
