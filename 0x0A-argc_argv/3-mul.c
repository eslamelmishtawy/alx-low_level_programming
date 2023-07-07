#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: absolute value of @n
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", x);
	return (0);

}
