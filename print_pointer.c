#include "main.h"

/**
 * print_pointer - outputs a hexadecimal representation of a pointer.
 * @val: argument list containing the pointer.
 * Return: number of characters printed.
 */
int print_pointer(va_list val)
{
	void *ptr;
	char *null_str = "(nil)";
	unsigned long int address;
	int printed_chars;
	int index;

	ptr = va_arg(val, void*);
	if (ptr == NULL)
	{
		for (index = 0; null_str[index] != '\0'; index++)
		{
			_putchar(null_str[index]);
		}
		return (index);
	}

	address = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	printed_chars = print_hex_extra(address);
	return (printed_chars + 2);
}

