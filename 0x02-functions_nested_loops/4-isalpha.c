#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - prints all alphabets.
 * @c: char under test
 * Return: always 0
 */

int _ialpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
