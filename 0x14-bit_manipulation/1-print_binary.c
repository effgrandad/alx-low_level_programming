#include "main.h"

/**
 * print_bnry - program that prints number recursively
 *@n: decimal number
 * Return: void
 */
void print_bnry(unsigned long int n)
{
	if (n == 0)
		return;
	print_bnry(n >> 1);
	if ((n & 1) == 0)
		_putcha('1');
	if ((n & 1) == 0)
		_putcha('0');
}

/**
 * print_binary - prints a binary notation
 * @n: converted decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putcha('0');
	else
	{
		print_bnry(n);
	}
}
