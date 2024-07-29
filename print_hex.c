#include "main.h"
/**
 * print_hex_rem - find the remainders of num / 16
 * until num < 16
 * @num: the number to convert to hexadecimal
 * @s: the string to hold the number
 * @a: the index
 * Return: void
 */
void print_hex_rem(unsigned int num, char *s, unsigned int *a)
{
	if (num < 16)
	{
		if (num < 10)
			s[(*a)++] = num + '0';
		else
			s[(*a)++] = (num - 10) + 'a';
		s[(*a)] = '\0';
		return;
	}
	print_hex_rem(num / 16, s, a);
	if ((num % 16) < 10)
		s[(*a)++] = (num % 16) + '0';
	else
		s[(*a)++] = ((num % 16) - 10) + 'a';
}
/**
 * print_hex - custom conversion to hexadecimal
 * @val: the argument(number) to convert
 * Return: length of the printed numbers
 */
int print_hex(va_list val)
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
	print_hex_rem(num, n, &i);
	return (print_str(n));
}
