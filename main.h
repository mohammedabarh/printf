#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Function declarations*/
int print_err(void);
int print_pct(void);
int print_str(char *s);
int print_char(va_list val);
int print_int(va_list val);
int print_bin(va_list val);
int print_pointer(va_list val);
int print_oct(va_list val);
int print_unsign(va_list val);
int print_oct(va_list val);
int print_HEX_aux (unsigned int value);
int print_rev(va_list val);
int print_string(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_S(va_list val);
int print_ptr(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct specifiers - hold sonversion specifiers
 * and corresponding functions
 * @type: the conversion specifier
 * @fct: function corresponding to specifier
 */
typedef struct specifiers
{
	char type;
	int (*fct)();
} spec;

#endif /* _MAIN_H */
