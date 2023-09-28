#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: binary number
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	unsigned int counter = 0;
	unsigned int pwr = 0;

	while (*b != '\0')
	{
		b++;
		i++;
	}
	b--;
	while (i != 0)
	{
		if (*b == NULL)
			return (0);
		if (*b != 48 && *b != 49)
			return (0);
		if (*b == 49)
		{
			pwr = power(counter);
			sum = sum + pwr;
		}
		b--;
		i--;
		counter++;
	}
	return (sum);
}

/**
 * power - check the code
 * @counter: exponent
 * Return: Always 0.
 */
unsigned int power(unsigned int counter)
{
	unsigned int power = 1, i;
	
	for (i = 1; i <= counter; i++)
	{
		power = power * 2;
	}
	return (power);
}
