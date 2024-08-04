#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

/**
 * struct flag - hold flags
 * @plus: '+' flag
 * @space: ' 'flag
 * @hash: '#' flag
 * @zero: 0 flag
 * @minus: '-' flag
 * @width: desired width
 * @is_prec: precision found
 * @prec: precision
 */
typedef struct flag
{
	int plus;
	int space;
	int hash;
	int zero;
	int minus;
	int width;
	int is_prec;
	int prec;
} flags;
/*Function declarations*/
int print_err(void);
int print_null(void);
int print_pct(va_list val, flags *f);
int print_str(char *s);
int print_char(va_list val, flags *f);
int print_int(va_list val, flags *f);
int print_bin(va_list val, flags *f);
int print_pointer(va_list val, flags *f);
int print_unsign(va_list val, flags *f);
int print_oct(va_list val, flags *f);
int print_rev(va_list val, flags *f);
int print_string(va_list val, flags *f);
int print_hex(va_list val, flags *f);
int print_HEX(va_list val, flags *f);
int print_rot13(va_list val, flags *f);
int print_S(va_list val, flags *f);
int print_ptr(va_list val, flags *f);
int _putchar(char c);
int _printf(const char *format, ...);
int find_flags(const char *format, int *i, flags *f, va_list val);
int find_prec(const char *format, int *i, va_list val);
int find_width(const char *format, int *i, va_list val);
int find_size(const char *format, int *i, va_list val);
int printw_flags(char *n, int length, int len, flags *f);

/**
 * struct specifiers - hold sonversion specifiers
 * and corresponding functions
 * @type: the conversion specifier
 * @fct: function corresponding to specifier
 */
typedef struct specifiers
{
	char type;
	int (*fct)(va_list val, flags *f);
} spec;

#endif /* _MAIN_H */
