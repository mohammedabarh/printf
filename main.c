#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
    int len1 = _printf("Testing large positive integer:[%d]\n", INT_MAX);
    int len2 = printf("Testing large positive integer:[%d]\n", INT_MAX);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing large negative integer:[%d]\n", INT_MIN);
    len2 = printf("Testing large negative integer:[%d]\n", INT_MIN);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing unsigned integer:[%u]\n", UINT_MAX);
    len2 = printf("Testing unsigned integer:[%u]\n", UINT_MAX);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing binary representation:[%b]\n", 255);
    len2 = printf("Testing binary representation:[%b]\n", 255);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing string with special characters:[%s]\n", "Line 1\nLine 2\tTabbed");
    len2 = printf("Testing string with special characters:[%s]\n", "Line 1\nLine 2\tTabbed");
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing character array:[%c%c%c]\n", 'A', 'B', 'C');
    len2 = printf("Testing character array:[%c%c%c]\n", 'A', 'B', 'C');
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing large string length:[%s]\n", "This is a very long string that exceeds the typical length for testing purposes.");
    len2 = printf("Testing large string length:[%s]\n", "This is a very long string that exceeds the typical length for testing purposes.");
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing octal for edge case:[%o]\n", 0);
    len2 = printf("Testing octal for edge case:[%o]\n", 0);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing hexadecimal for edge case:[%x]\n", 0);
    len2 = printf("Testing hexadecimal for edge case:[%x]\n", 0);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing address with null pointer:[%p]\n", NULL);
    len2 = printf("Testing address with null pointer:[%p]\n", NULL);
    printf("len1: %d, len2: %d\n", len1, len2);

    return 0;
}

