#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		1++;
	}
	for (; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}

