#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
        char *ar;
        int i;
	int len = 0;

        if (str == NULL)
        {
                return (NULL);
        }
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	printf("%d\n", len);
        ar = malloc(sizeof(char) * len);

        if (ar == NULL)
        {
                return (NULL);
        }

        for (i = 0; i < len; i++)
        {
                ar[i] = str[i];
        }
	ar[len] = '\0';

        return (ar);
}
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
