#include <stdio.h>

/**
 * main - prints 3 combination of numbers
 * and avoide repetition of numbers in pair e.g:
 * 101 is same as 110 or 011 etc.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, y;

	for (n = 48; n <= 55; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			for (y = 50; y <= 57; y++)
			{
				if (m > n && y > m)
				{
					putchar(n);
					putchar(m);
					putchar(y);
					if (n != 55 || m != 56 || y != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
