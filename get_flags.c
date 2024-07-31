#include "main.h"

/**
 * get_flags - counts the active flags
 * @format: The format string to check.
 * @i: Index position to start from.
 * Return: The combined flag values.
 */
int get_flags(const char *format, int *i)
{
	int j, pos;
	int flags = 0;
	const char flag_chars[] = {'-', '+', '0', '#', ' ', '\0'};
	const int flag_vals[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (pos = *i + 1; format[pos] != '\0'; pos++)
	{
		for (j = 0; flag_chars[j] != '\0'; j++)
			if (format[pos] == flag_chars[j])
			{
				flags |= flag_vals[j];
				break;
			}

		if (flag_chars[j] == 0)
			break;
	}

	*i = pos - 1;

	return (flags);
}
