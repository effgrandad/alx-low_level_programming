#include "main.h"
#include <stdio.h>

/**
 * error_file - it checks if files can be open
 * @file_from: file_from
 * @file_to: file_to
 * @argv: takes argument number
 * Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1])
			exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checks code for Holberton school students
 * @argv: takes argument number
 * @argc: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int err_close, file_from, file_to;
	ssize_t val_char, val_wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	val_char = 1024;
	while (val_char == 1024)
	{
		val_chars = read(file_from, buff, 1024);
		if (val_chars == -1)
			error_file(-1, 0, argv);
		val_wr = write(file_to, buff, val_chars);
		if (val_wr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close f_d %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close f_d %d\n", file_from);
		exit(100);
	}
	return (0);
}
