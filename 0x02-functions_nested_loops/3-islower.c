#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - prints all alphabets.
 * @c: char under test
 * Return: always 0
 */

int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
