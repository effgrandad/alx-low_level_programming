#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using pointers
 * @name: name to be printed
 * @f: pointer to function printing a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
