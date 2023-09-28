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

	while (b != '\0')
	{
		b--;
		i++
	}
	b++;
	while (i != 0)
	{
		if (b == '1')
		{
			sum = sum + (pow(2, counter));
		}
		b++;
		i--;
		counter++;
	}
	return (sum);
}
