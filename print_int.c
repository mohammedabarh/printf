#include <stdlib.h>
#include "main.h"
/**
 * int_to_str - change an  integer number into a string
 * @a: the integer
 * @s: string to hold the integer
 * Return: character numbers
 */
char *int_to_str(int a, char *s)
{
	int i = 0, j, s_len, negative = 0, temp;

	if (a < 0)
	{
		negative = 1;
		a = -a;
	}
	do {
		s[i] = (a % 10) + '0';
		a = a / 10;
		i++;
	} while (a > 0);
	if (negative)
		s[i++] = '-';
	s_len = _strlen(s);
	s[s_len] = '\0';
	for (i = 0, j = s_len - 1; i < s_len; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	return (s);
}
/**
 * print_int - print an integer
 * @val: arguments
 * Return: length of the integer
 */
int print_int(va_list val)
{
	char  i = va_arg(val, int), len = 0;
	char *num, *n;

	num = malloc(i);
	n = int_to_str(i, num);
	len = print_str(n);
	free(n);
	return (len);
}