#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("");
    len2 = printf("");
    _printf("%d Len of []\n", len);
    printf("%d Len of []:\n", len2);
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Negative:[%d]\n", -762534123456789);
    len2 = printf("Negative:[%d]\n", -762534123456789);
    _printf("Negative count:[%d]\n", len);
    printf("Negative count:[%d]\n", len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("Large number:[%d]\n", 123456789);
    printf("Large number:[%d]\n", 123456789);
    _printf("Zero:[%d]\n", 0);
    printf("Zero:[%d]\n", 0);
    _printf("Special characters:[%s]\n", "Line1\nLine2\tTabbed");
    printf("Special characters:[%s]\n", "Line1\nLine2\tTabbed");
    len = _printf("NULL string:[%s]\n", NULL);
    len2 = printf("NULL string:[%s]\n", NULL);
    _printf("NULL:[%d]\n", len);
    printf("NULL:[%d]\n", len2);

    return (0);
}
