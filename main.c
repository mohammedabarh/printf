#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
	
    int len1, len2;
    unsigned int ui = (unsigned int)INT_MAX + 1024;
    void *addr = (void *)0x7ffe637541f0; /* Non-NULL address for testing */

    _printf("%.*s", 6, "Hi!\n");
    _printf("%.*s", 6, "Best School !\n");
    _printf("%.6s", "Best School !\n");
    printf("In the middle %.6o of a sentence.\n", 1024);
    _printf("In the middle %.6s of a sentence.\n", "Best!");
    printf("In the middle %.6s of a sentence.\n", "Best!");
    _printf("%.*s", 0, "Hi!");
    _printf("%.*s", 6, "Hi!\n");
    printf("%.*s", 6, "Hi!\n");
    _printf("%.6d  ", 0);
    printf("%.6d\n", 0);
    _printf("%.*u  ", 6, 1024);
    printf("%.*u\n\n", 6, 1024);
    _printf("%06d  ", -1024);
    printf("%06d\n", -1024);
    _printf("%06i ", -1024);
    printf("%06i\n", -1024);
    _printf("In the middle %06d of a sentence.\n", 1024);
    printf("In the middle %06d of a sentence.\n", 1024);
    _printf("%06u  ", 102498402);
    printf("%06u\n", 102498402);
    _printf("%-6d  ", 1024);
    printf("%-6d\n", 1024);
    _printf("%-6i  ", -102498402);
    printf("%-6i\n", -102498402);
    _printf("%06x  ", 102498402);
    printf("%06x\n\n", 102498402);
    _printf("%06i\n", 0);
    _printf("%015d\n", 98402);
    printf("%015d\n", 98402);
    len1 = _printf("%-20d\n", 102498402);
    len2 = printf("%-20d\n", 102498402);
    printf("%d, %d\n", len1, len2);
    printf("\n\n");
    _printf("% d - % d = % d\n", 1024, 2048, -1024);
    printf("% d - % d = % d\n", 1024, 2048, -1024);
    printf("\n\n");
    _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    len1 = _printf("Testing NULL string:[%s]\n", NULL);
    len2 = printf("Testing NULL string:[%s]\n", NULL);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing NULL character:[%c]\n", '\0');
    len2 = printf("Testing NULL character:[%c]\n", '\0');
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing NULL pointer:[%p]\n", addr);
    len2 = printf("Testing NULL pointer:[%p]\n", addr);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing unsigned with max value:[%u]\n", ui);
    len2 = printf("Testing unsigned with max value:[%u]\n", ui);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing signed with max value:[%d]\n", (int)ui);
    len2 = printf("Testing signed with max value:[%d]\n", (int)ui);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing octal with max value:[%o]\n", ui);
    len2 = printf("Testing octal with max value:[%o]\n", ui);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing hexadecimal with max value:[%x]\n", ui);
    len2 = printf("Testing hexadecimal with max value:[%x]\n", ui);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing uppercase hexadecimal with max value:[%X]\n", ui);
    len2 = printf("Testing uppercase hexadecimal with max value:[%X]\n", ui);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing NULL for binary:[%b]\n", NULL);
    len2 = printf("Testing NULL for binary:[%b]\n", NULL);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing percent sign:[%%]\n");
    len2 = printf("Testing percent sign:[%%]\n");
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing NULL for integer:[%i]\n", NULL);
    len2 = printf("Testing NULL for integer:[%i]\n", NULL);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing NULL for reverse string:[%r]\n", NULL);
    len2 = printf("Testing NULL for reverse string:[%r]\n", NULL);
    printf("len1: %d, len2: %d\n", len1, len2);

    len1 = _printf("Testing NULL for reverse string (uppercase):[%Z]\n", NULL);
    len2 = printf("Testing NULL for reverse string (uppercase):[%Z]\n", NULL);
    printf("len1: %d, len2: %d\n", len1, len2);
    
    /*---------------------------------------------*/
    _printf("%+d", 1024);
    printf("%+d", 1024);
    _printf("%+d", -1024);
    printf("%+d", -1024);
    _printf("%+d", 0);
    printf("%+d", 0);
    _printf("%+d", INT_MAX);
    printf("%+d", INT_MAX);
    _printf("%+d", INT_MIN);
    printf("%+d", INT_MIN);
    _printf("%+d", 1024);
    printf("%+d", 1024);
    _printf("%+d", 1024);
    printf("%+d", 1024);
    _printf("There is %+d bytes in %+d KB\n", 1024, 1);
    printf("There is %+d bytes in %+d KB\n", 1024, 1);
    _printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
    printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
    _printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
     printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
     return (0);
}
