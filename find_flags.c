#include "main.h"

/**
 * find_flags - Analyze the format string for active flags.
 * @s: the specifier
 * @f: pointer to the structure of flags
 *
 * Return: 1 if a flag is found, 0 if not
 */
int find_flags(char s, flags *f)
{
	int i = 0;

	(void)f;
	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
