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
 * parse_flags - traverse flags and count them
 * @format: argument
 * @index: index of format output
 * @fl: pointer to the data structure of flags
 * Return: number of flags found
 */
int parse_flags(const char *format, int *index, flags *fl)
{
	int count = 0;

	while (find_flags(format[*index], fl))
	{
		count++;
		(*index)++;
	}
	return (count);
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
	int i = 0, j, len = 0, result, flag_count;

	if (format == NULL || (format[0] == '%' && !format[1]))
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
		flag_count = parse_flags(format, &j, &fl);
		if (flag_count == 1 && format[j - 1] == ' ')
		{
			if (format[j] == '%' || format[j] == '\0')
			{
				print_str("% ");
				len += 1;
				i += 2;
				continue;
			}
		}
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
