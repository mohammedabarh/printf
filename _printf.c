#include <stdarg.h>
#include "main.h"
/**
 * _printf - print output according to format
 * @format: function argument(output and/or format specifiers)
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list str;
	int i = 0, len = 0;
	char *s;

	va_start(str, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					len += print_char(str);
					break;
				case 's':
					s = va_arg(str, char*);
					len += print_str(s);
					break;
				case '%':
					len += print_37();
					break;
				case 'd':
					len += print_int(str);
					break;
				case 'i':
					len += print_int(str);
					break;
				default:
					_putchar(format[i]);
					i++;
					continue;
			}
			i += 2;
			continue;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(str);
	return (len);
}
