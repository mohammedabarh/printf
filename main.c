<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
=======
#include <limits.h>
#include <stdio.h>
#include "main.h"

>>>>>>> 33f2fe9967db9df79cab242638357c502cf8aecf
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
<<<<<<< HEAD
    _printf("%b\n", 98);
    return (0);
=======
    int len;
    int len2;

    len = 1;
    len2 = 2;
    _printf("\n%lucv \n", (long unsigned int)len);
    printf("\n%lucv\n", (long unsigned int)len2);
    _printf("\n---------------------------\n");
    len = _printf("%d Len of []%", NULL);
    _printf("\n%d\n", len);
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
>>>>>>> 33f2fe9967db9df79cab242638357c502cf8aecf
}
