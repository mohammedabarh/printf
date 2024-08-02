#include <unistd.h>
#include "main.h"
/**
 * _putchar - create a buffer to print to stdout
 * in order to able to call write as little as possible
 * @c: the character
 * Return: 1 or -1 if any error occurs
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
