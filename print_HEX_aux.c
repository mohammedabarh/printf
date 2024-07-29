#include "main.h"

/**
 *  print_HEX_aux - outputs a hexadecimal representation of a number.
 * @value: the number to be printed.
 * Return: the number of characters printed.
 */
int print_HEX_aux(unsigned int value)
{
	int index;
	int *digits;
	int length = 0;
	unsigned int temp = value;

	while (value >= 16)
	{
		value /= 16;
		length++;
	}
	length++;
	digits = malloc(length * sizeof(int));
	if (digits == NULL)
		return (0); /* Return 0 if memory allocation fails */

	for (index = 0; index < length; index++)
	{
		digits[index] = temp % 16;
		temp /= 16;
	}

	for (index = length - 1; index >= 0; index--)
	{
		if (digits[index] >= 10)
			_putchar(digits[index] + 'A' - 10);
		else
			_putchar(digits[index] + '0');
	}

	free(digits);
	return (length);
}

