#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
    unsigned int ui = (unsigned int)INT_MAX + 1024;
    void *addr = (void *)0x7ffe637541f0; /* Non-NULL address for testing */

    int len1 = _printf("Testing NULL string:[%s]\n", NULL);
    int len2 = printf("Testing NULL string:[%s]\n", NULL);
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

    return 0;
}

