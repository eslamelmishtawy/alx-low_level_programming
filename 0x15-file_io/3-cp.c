#include "main.h"

/**
 * cp_from_to - check the code
 * @from: from
 * @to: to
 */
void cp_from_to(const char *from, const char *to)
{
	char buffer[1024];
	int fd_from, fd_to;
	ssize_t bytes;
	int stat;

	fd_from = open(from, O_RDONLY);
	if (!from || fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	do {
		bytes = read(fd_from, buffer, 1024);
		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", from);
			exit(98);
		}
		if (write(fd_to, buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	} while (bytes);

	stat = close(fd_from);
	if (stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	stat = close(fd_to);
	if (stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
/**
 * main - check the code
 * @argc: f
 * @argv: l
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_from_to(argv[1], argv[2]);
	return (0);
}
