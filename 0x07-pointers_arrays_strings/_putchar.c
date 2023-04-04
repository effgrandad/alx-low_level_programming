#include <unistd.h>

/**
 * _putchar - write c character to stdout
 * @c: the character to print
 * Return: on suceess 1.
 * on error, -1 is returned, set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
