#include "main.h"

/**
 * append_text_to_file - at the end of a file append text
 * @filename: filename
 * @text_content: addition of content
 *
 * Return: 1 if file exist, if file does not exist or fails -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_d;
	int rwr;
	int val_letters = 0;

	if (!filename)
		return (-1);
	f_d = open(filename, O_WRONLY | O_APPEND);

	if (f_d == -1)
		return (-1);
	if (text_content)
	{
		for (; text_content[val_letters]; val_letters++)
		rwr = write(f_d, text_content, val_letters);
		if (rwr == -1)
			return (-1);
	}
	close(f_d);
	return (1);
}
