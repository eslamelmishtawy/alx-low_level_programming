#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - check the code
 * @s: s
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
    while(*s != '\0')
	{
	       	puts(*s);
		_put_recursion(s+1);
	}
    puts('\n');
}
