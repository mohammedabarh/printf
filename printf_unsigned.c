#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @args: Argument to print
 * Return: The count of characters printed
 */
int print_unsigned(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    int count = 0;
    int divisor = 1;

    // Handle negative integers
    if (n < 0)
    {
        _putchar('-');
        n = -n;
        count++;
    }

    // Find the divisor for the leading digit
    while (n / divisor >= 10)
        divisor *= 10;

    // Print each digit of the number
    while (divisor != 0)
    {
        int digit = n / divisor;
        _putchar('0' + digit);
        count++;
        n %= divisor;
        divisor /= 10;
    }

    return count;
}
