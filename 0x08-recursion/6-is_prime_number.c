#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - returns if number is prime
 * @n: the number to be checked
 * Return: interger value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}


/**
 * check_prime - check if number is prime
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Retrurn: 1 for prime or 0 composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / 1) < i)
		return (1);
	return (check_prime(n, i + 1));
}
