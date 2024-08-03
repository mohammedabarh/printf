#include "main.h"
/**
 * handle_specifiers - create a structures that links conversion
 * specifiers with their corresponding structures
 * @s: conversion specifier form in_printf()
 * @val: argument
 * @f: pointer to the structur of flags
 * Return: length of printed characters
 */
int handle_specifiers(char s, va_list val, flags *f)
{
	spec sp[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_pct},
		{'d', print_int}, {'i', print_int}, {'b', print_bin},
		{'u', print_unsign}, {'o', print_oct}, {'x', print_hex},
		{'X', print_HEX}, {'S', print_S}, {'p', print_ptr},
		{'r', print_rev}, {'R', print_rot13}
	};
	unsigned int i = 0;

	while (i < 14)
	{
		if (sp[i].type == s)
			return (sp[i].fct(val, f));
		i++;
	}
	return (-1);
}
/**
 * _printf - print output according to format
 * @format: function argument(output and/or format specifiers)
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list str;
	flags fl = {0, 0, 0};
	int i = 0, j, len = 0, result;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(str, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i] != '\0')
			len += _putchar(format[i++]);
		if (format[i] == '\0')
			return (len);
		j = i + 1;
		if (format[j] == '\0')
			return (-1);
		while (find_flags(format[j], &fl))
			j++;
		result = handle_specifiers(format[j], str, &fl);
		if (result >= 0)
		{
			len += result;
			i += j - i + 1;
			continue;
		}
		len += _putchar(format[i]);
		len += _putchar(format[j]);
		i += 2;
	}
	va_end(str);
	return (len);
}
