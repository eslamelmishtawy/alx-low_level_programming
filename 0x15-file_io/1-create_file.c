#include "main.h"

/**
 * create_file - check the code
 * @filename: f
 * @text_content: l
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int counter;
	ssize_t rdwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (counter = 0; text_content[counter]; counter++)
		;
	rdwr = write(fd, text_content, counter);
	if (rdrw == -1)
		return (-1);
	close(fd);
	return (1);
}
