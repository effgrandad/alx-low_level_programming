#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabet'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 65)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

