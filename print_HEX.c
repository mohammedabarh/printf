#include "main.h"
/**
 * print_HEX_rem - find remainders of num / 16 until
 * num < 16 (print characters in uppercase)
 * @num: the number to convert to uppercase hexa
 * @s: the string to hold the converted number
 * @a: the index
 * Return: void
 */
void print_HEX_rem(unsigned int num, char *s, unsigned int *a)
{
	if (num < 16)
	{
		if (num < 10)
			s[(*a)++] = num + '0';
		else
			s[(*a)++] = (num - 10) + 'A';
		s[(*a)] = '\0';
		return;
	}
	print_HEX_rem(num / 16, s, a);
	if ((num % 16) < 10)
		s[(*a)++] = (num % 16) + '0';
	else
		s[(*a)++] = ((num % 16) - 10) + 'A';
}
/**
 * print_HEX - custom conversion to uppercase hexa
 * @val: the argument(the number) to be converted
 * Return: the length of the printed & converted number
 */
int print_HEX(va_list val)
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
	print_HEX_rem(num, n, &i);
	return (print_str(n));
}
