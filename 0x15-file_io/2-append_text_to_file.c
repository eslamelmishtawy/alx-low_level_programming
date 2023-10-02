#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: f
 * @text_content: l
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int counter;
	ssize_t rdwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);

	for (counter = 0; text_content[counter]; counter++)
		;
	rdwr = write(fd, text_content, counter);
	if (rdwr == -1)
		return (-1);
	close(fd);
	return (1);
}
