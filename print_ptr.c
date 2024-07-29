#include "main.h"
/**
 */
int print_ptr(va_list val)
{
	char c = va_arg(val, int);

	printf("%p\n", c);
	return (1);
}
