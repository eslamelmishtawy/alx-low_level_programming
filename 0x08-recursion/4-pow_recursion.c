#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - check the code
 * @x: s
 * @y: s
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(y - 1));
}
