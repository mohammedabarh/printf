#include "main.h"
/**
 * uint_to_str - change an unsigned int into a string
 * @a: the unsigned int
 * @s: string to hold the unsigned int
 * Return: character numbers
 */
char *uint_to_str(unsigned int a, char *s)
{
	unsigned int i = 0, j, s_len = 0, temp;

	do {
		s[i] = (a % 10) + '0';
		a = a / 10;
		i++;
	} while (a > 0);
	s[i] = '\0';
	s_len = i;
	for (i = 0, j = s_len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	return (s);
}
/**
 * print_unsign - handle %u(unsigned) specifier
 * @val: the argument
 * @f: pointer to the structure of flags
 * Return: length of the printed argument
 */
int print_unsign(va_list val, flags *f)
{
	unsigned int i = va_arg(val, unsigned int), len = 0;
	char *num, *n;
	int length;

	num = malloc(8);
	if (num == NULL)
	{
		free(num);
		return (-1);
	}
	n = uint_to_str(i, num);
	length = strlen(n);
	len = printw_flags(n, length, len, f);
	free(num);
	return (len);
}
