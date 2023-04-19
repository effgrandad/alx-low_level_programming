#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return sum of two number
 * @a: first entry
 * @b: second entry
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return difference between two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);

}

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return division of two numbers
 * @a: first number
 * @b: secod number
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
