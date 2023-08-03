#include "main.h"
/**
 * print_binary - decimal to binary without use / %
 * @n: the decimal
 * Description: convert decimal to binary
 * section header: the header of this function is holberton.h
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	while (n != 0)
	{
		if (n % 2 == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		n = n / 2;
	}
}
