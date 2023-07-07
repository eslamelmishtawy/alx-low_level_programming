#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - prints all alphabets.
 * @c: char under test
 * Return: always 0
 */

int _isalpha(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
