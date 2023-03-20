#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
printf("size of char: %lu bytes(S)", sizeof(char));
printf("size of int: %lu byte(S)", sizeof(int));
printf("size of a long int: %lu byte(s)", sizeof(long int));
printf("size of a long long int: %lu byte(s)", sizeof(long long int));
printf("size of a float int: %lu byte(s)", sizeof(float));
return (0);
}
