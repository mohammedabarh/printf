#include "main.h"
/**
 * print_oct_rem - find the remainder of num / 8 until
 * num < 8
 * @num: the number to convert to octal
 * @s: the string to hold the number
 * @a: the index
 * Return: void
 */
void print_oct_rem(unsigned int num, char *s, unsigned int *a)
{
	while (num < 8)
	{
		s[(*a)++] = num + '0';
		s[(*a)] = '\0';
		return;
	}
	print_oct_rem(num / 8, s, a);
	s[(*a)++] = (num % 8) + '0';
}
/**
 * print_oct - print number in octal format
 * @val: argument(the number)
 * @f: pointer to the structure of flags
 * Return: length of the printed octal number
 */
int print_oct(va_list val, flags *f)
{
	unsigned int num, i = 0;
	char *n;
	int len = 0, length;

	num = va_arg(val, unsigned int);
	n = malloc(33 * sizeof(char *));
	if (n == NULL)
	{
		free(n);
		return (-1);
	}
	print_oct_rem(num, n, &i);
	if (f->hash == 1 && n[0] != '0')
		len += _putchar('0');
	length = strlen(n);
	len = printw_flags(n, length, len, f);
	return (len);
}
