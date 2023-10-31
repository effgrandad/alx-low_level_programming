#include "maimn.h"
#include "unistd.h"
#include "stdlib.h"
#include "sys/types.h"
#include "fcntl.h"
#include "sys/stat.h"

/**
 * read_textfile - prog that read  text file, prints it to POSIX stdoutput
 * @filename: filename to read
 * @letters: a value of letter it read and print
 * Return: an actual value of letters it read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d;
	ssize_t len_r, len_w;
	char *buff;

	if (filename == NULL)
		return (0);
	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		closed(f_d);
		return (0);
	}
	len_r = read(f_d, buff, letters);
	close(f_d);
	if (len_r == -1)
	{
		free(buff);
		return (0);
	}
	len_w = write(STDOUT_FILENO, buff, len_r);
	free(buff);
	if (len_r != len_w)
		return (0);
	return (len_w);
}
