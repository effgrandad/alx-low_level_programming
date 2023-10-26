#include <unistd.h>

/**
 * _putcha - write character b to stdout
 * @a: The printed character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putcha(char a)
{
	return (write(1, &c, 1));
}

