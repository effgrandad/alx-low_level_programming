#include <stdio.h>
#include "main.h"

/**
 * main - number of arguments passed to the program
 * @argc: number of argument
 * @argv: array of argument
 * Return: always 0
 */
int main(int argv; char *argv[])
{
	(void) argv; /*ignore argv*/

		printf("%d\n", argv - 1);
		return (0);
}
