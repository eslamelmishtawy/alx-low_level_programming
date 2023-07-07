#include <stdio.h>
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: absolute value of @n
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		printf("Error");
		return (1);
	}
	return (argv[0] * argv[1]);

}
