#include <stdio>

/**
 * main - prints numberbetween 00 and 89
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	i = 40;

	while (e < 58)
	{
		i = 40;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(',');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
