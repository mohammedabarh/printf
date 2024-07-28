#include <stdarg.h>
#include "main.h"
/**
 * handle_specifiers - create a structures that links conversion
 * specifiers with their corresponding structures
 * @s: conversion specifier form in_printf()
 * @val: lateral argument to conversion specifier
 * Return: length of printed characters
 */
int handle_specifiers(char s, va_list val)
{
	spec sp[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pct},
		{'d', print_int},
		{'i', print_int},
	};
	int i = 0, len = 0;

	while (i < 5)
	{
		if (sp[i].type == s)
		{
			if (sp[i].type == 's')
				len = sp[i].fct(va_arg(val, char*));
			else
				len = sp[i].fct(val);
		}
		i++;
	}
	return (len);
}
/**
 * _printf - print output according to format
 * @format: function argument(output and/or format specifiers)
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list str;
	int i = 0, len = 0, result = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(str, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				result = handle_specifiers(format[i + 1], str);
				if (result == 0)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					len += 2;
				}
				else
					len += result;
				i += 2;
			}
			else
			{
				va_end(str);
				return (-1);
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(str);
	return (len);
}
