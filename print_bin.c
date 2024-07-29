#include <limits.h>
#include "main.h"
/**
 * print_bin_rem - find the remainders of num / 2 until
 * num < 2
 * @num: the number to convert to binary
 * @s: the string to hold the number
 * @a: index
 * Return: void
 */
void print_bin_rem(unsigned int num, char *s, unsigned int *a)
{
	while (num < 2)
	{
		s[(*a)++] = num + '0';
		s[(*a)] = '\0';
		return;
	}
	print_bin_rem(num / 2, s, a);
	s[(*a)++] = (num % 2) + '0';
}
/**
 * print_bin = custom conversion to binary
 * @val: the argument to convert
 * Return: length of printed numbers
 */
int print_bin(va_list val)
{
	unsigned int num, i = 0;
	char *n;

	num = va_arg(val, unsigned int);
	n = malloc(33 * sizeof(char *));
	if (n == NULL)
	{
		free(n);
		return (-1);
	}
	print_bin_rem(num, n, &i);
	return (print_str(n));
}
