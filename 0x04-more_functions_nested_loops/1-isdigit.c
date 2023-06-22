#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - prints all alphabets.
 * @c: char under test
 * Return: always 0
 */

int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
