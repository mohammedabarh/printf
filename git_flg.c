#include "main.h"

/**
 * get_flg - Parses the format string for active flags.
 * @format: The format string to check.
 * @i: Index position to start from.
 *
 * Return: The combined flag values.
 */
int get_flg(const char *format, int *i)
{
	int flags = 0;
	int pos = *i + 1;
	int j;

	/* Define flag characters and their corresponding values */
	const char flag_chars[] = {'-', '+', '0', '#', ' ', '\0'};
	const int flag_vals[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	while (format[pos] != '\0')
	{
		for (j = 0; flag_chars[j] != '\0'; j++)
		{
			if (format[pos] == flag_chars[j])
			{
				flags |= flag_vals[j];
				break;
			}
		}

		if (flag_chars[j] == '\0')
			break;

		pos++;
	}

	*i = pos - 1;
	return (flags);
}

