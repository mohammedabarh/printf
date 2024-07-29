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
	unsigned int i = 0;

	while (i < 5)
	{
		if (sp[i].type == s)
		{
			if (sp[i].type == 's')
				return (sp[i].fct(va_arg(val, char*)));
			else
				return (sp[i].fct(val));
		}
		i++;
	}
	return (0);
}
/**
 * _printf - print output according to format
 * @format: function argument(output and/or format specifiers)
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list str;
	int i = 0, j, len = 0, result;

	if (format == NULL)
		return (-1);
	va_start(str, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			len++;
			i++;
		}
		if (format[i] == '\0')
			return (len);
		j = i + 1;
		result = handle_specifiers(format[j], str);
		if (result != 0)
		{
			len += result;
			i += 2;
			continue;
		}
		if (format[j] == '\0')
			return (-1);
		_putchar(format[i]);
		len++;
		if (format[j] == '%')
			i += 2;
		else
			i++;
	}
	va_end(str);
	return (len);
}
