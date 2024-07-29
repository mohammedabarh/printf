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
	int i = 4, len = 0;

	while (i >= 0)
	{
		if (sp[i].type == s)
		{
			if (sp[i].type == 's')
				len = sp[i].fct(va_arg(val, char*));
			else
				len = sp[i].fct(val);
		}
		i--;
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
	int i = 0, j, len = 0, result = 0;

	va_start(str, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = i + 1;
			if (format[j] == '\0')
				return (-1);
			while (format[j] != '\0' && format[j] != ' ')
			{
				result = handle_specifiers(format[j], str);
				if (result > 0)
				{
					len += result;
					i = j;
					break;
				}
				_putchar(format[i]);
				_putchar(format[j]);
				i = j;
				len += 2;
				break;
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
