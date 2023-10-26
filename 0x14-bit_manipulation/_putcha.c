#include <unistd.h>

/**
 * _putcha - write character b to stdout
 * @b: The printed character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putcha(char b)
{
	return (write(1, &b, 1));
}

