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
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
	int i = 0, len = 0;

	while (sp[i].type != '\0')
	{
		if (sp[i].type == s)
			len = sp[i].fct(val);
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

	if (format == NULL || *format == '\0')
		return (-1);
	va_start(str, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				if (format[i + 1] == 's')
					result = print_str(va_arg(str, char*));
				else if (format[i + 1] == '%')
					result = print_pct();
				else
					result = handle_specifiers(format[i + 1], str);
				if (result == 0)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					len += 2;
				}
				else
					len += result;
				i++;
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
		}
		i++;
	}
	va_end(str);
	return (len);
}
