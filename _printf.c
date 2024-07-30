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
		{'c', print_char}, {'s', print_str}, {'%', print_pct},
		{'d', print_int}, {'i', print_int}, {'b', print_bin},
		{'u', print_unsign}, {'o', print_oct}, {'x', print_hex},
		{'X', print_HEX}, {'S', print_S}, {'p', print_ptr},
		{'r', print_rev}, {'R', print_rot13}
	};
	unsigned int i = 0;

	while (i < 14)
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

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
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
		while (format[j] == '\0')
			return (-1);
		result = handle_specifiers(format[j], str);
		if (result != 0)
		{
			len += result;
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
