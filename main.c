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

    /*len = _printf("\0")*/
    /*len2 = printf("\0")*/
    len = 1;
    len2 = 2;
    _printf("\n%zcv \n", len);
    _printf("\n---------------------------\n");
    len = _printf("%d Len of []%", NULL);
    _printf("\n%d\n", len);
   /* len2 = printf("%d Len of []%", NULL);*/
    printf("\n%d\n", len2);
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length: [%d, %i]\n", len, len);
    printf("Length: [%d, %i]\n", len2, len2);
    len = _printf("Negative: [%d]\n", -762534);
    len2 = printf("Negative: [%d]\n", -762534);
    _printf("Negative count: [%d]\n", len);
    printf("Negative count: [%d]\n", len2);
    len = _printf("Character: [%c]\n", 'H');
    len2 = printf("Character: [%c]\n", 'H');
    _printf("Character len: [%d]\n", len);
    printf("Character len: [%d]\n", len2);
    len = _printf("String: [%s]\n", "I am a string!");
    len2 = printf("String: [%s]\n", "I am a string!");
    _printf("String len: [%d]\n", len);
    printf("String len: [%d]\n", len2);
    len = _printf("Percent: [%%]\n");
    len2 = printf("Percent: [%%]\n");
    _printf("Percent len: [%d]\n", len);
    printf("Percent len: [%d]\n", len2);
    len = _printf("Multiple: Character: [%c], String: [%s], Integer: [%d]\n", 'A', "Test", 42);
    len2 = printf("Multiple: Character: [%c], String: [%s], Integer: [%d]\n", 'A', "Test", 42);
    _printf("Multiple len: [%d]\n", len);
    printf("Multiple len: [%d]\n", len2);
    len = _printf("Unknown: [%x]\n", 255);
    len2 = printf("Unknown: [%x]\n", 255);
    _printf("Unknown len: [%d]\n", len);
    printf("Unknown len: [%d]\n", len2);
    len = _printf("Integer test: [%d], [%i]\n", 1234, 1234);
    len2 = printf("Integer test: [%d], [%i]\n", 1234, 1234);
    _printf("Integer test len: [%d]\n", len);
    printf("Integer test len: [%d]\n", len2);
    return 0;
}
