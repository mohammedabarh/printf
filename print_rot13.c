#include "main.h"
/**
 * print_rot13 - encodes a string using ROT13
 * @val: list of arguments for printf
 * Return: number of characters printed
 */
int print_rot13(va_list val)
{
	int i, j, counter = 0;
	int found = 0;
	char *s = va_arg(val, char*);
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; alpha[j] != '\0' && !found; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(rot13[j]);
				counter++;
				found = 1;
			}
		}
		if (!found)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
