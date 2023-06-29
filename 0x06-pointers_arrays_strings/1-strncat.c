#include "main.h"
#include <string.h>
/**
 * _strncat - reset value on n to 98
 * @a: pointer to value of n
 * @b: c
 * @n: n
 * Return: return n
 */
char *_strncat(char *a, char *b, int n)
{
	return (strncat(a, b, n));
}
