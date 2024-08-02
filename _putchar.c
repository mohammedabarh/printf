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
	static buffer[1024];
	static i;

	/* Empty the buffer */
	if (c == -1 || i >= 1024)
	{
		write(1, buffer, i);
		i = 0;
	}
	/* Add character to the buffer */
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}
