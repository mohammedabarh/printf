#include <unistd.h>
#include "main.h"
/**
 * _putchar - print a character
 * @c: the character
 * Return: 1 or -1 if any error occurs
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
