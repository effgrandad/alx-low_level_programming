#include "main.h"

/**
 * _powa - program that calculates (base ^ power)
 * @base: base of exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _powa(unsigned int base, unsigned int power)
{
	unsigned long int sum;
	unsigned int j;

	sum = 1;
	for (j = 1; j <= power; j++)
		sum *= base;
	return (sum);
}

/**
 * print_binary - prints a count in binary notation
 * @n: count to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _powa(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putcha('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putcha('0');
		}
		divisor >>= 1;
	}
}
