#include "main.h"
/**
 * print_string - print a string
 * @val: argument
 * @f: pointer to the structure of flags
 * Return: length of the string
 */
int print_string(va_list val, flags *f)
{
	char *s = va_arg(val, char*);
	int i = 0, len = 0, length;

	if (s == NULL)
		s = "(null)";
	length = strlen(s);
	if (f->is_prec && f->prec == 0)
		return (0);
	if (f->is_prec && f->prec < length)
		s[f->prec] = '\0';
	while (s[i])
	{
		_putchar(s[i]);
		i++;
		len++;
	}
	return (len);
}
