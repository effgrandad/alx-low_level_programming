#include "main.h"

/**
 * create_file - funct that create a file
 * @filename: filename
 * @text_content: content contained in the file
 *
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int f_d;
	int val_letters = 0;
	int rwr;

	if (!filename)
		return (-1);
	 f_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	 if (f_d == -1)
		 return (-1);

	 if (!text_content)
		 text_content = "";
	 for (; text_content[val_letters]; val_letters++);

	 rwr = write(f_d, text_content, val_letters);

	 if (rwr == -1)
		 return (-1);
	 close(f_d);

	 return (1);
}
