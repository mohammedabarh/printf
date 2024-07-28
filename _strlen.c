#include "main.h"

/**
 * _strlen - Finds the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int c = 0, l;

	if (s == NULL)
	{
		s = "(null)";
		for (c = 0; c < _strlen(s); c++)
			l++;
		return (l);
	}
	while (s[c] != '\0')
		c++;
	return (c);
}
