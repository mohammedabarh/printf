#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Function declarations*/
int print_pct(void);
int _strlen(char *s);
int print_str(char *s);
int print_char(va_list val);
int print_int(va_list val);
void _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct specifiers - hold sonversion specifiers
 * and corresponding functions
 * @type: the conversion specifier
 * @fct: corresponding function that handles
 * va_list val as an argument
 */
typedef struct specifiers
{
	char type;
	int (*fct)(va_list val);
} spec;

#endif /* _MAIN_H */
