#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argv: argument one 
 * @@argc: argument to counted
 * Return: 0
 */
int main(int argc, int **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);

	return (0);
}
