#include <stdio.h>
/*
 *print all different combinations from 0 to 99 in order followed by ,
 *using only p...
 */

/**
 *main - entry point
 *spits out all different combinations of different digits between 0 and 99
 *Return: 0
 */
int main(void)
{
	int d = 48;
	int i;

	while (d < 58)
	{
		i = d + 1;
		while (i < 58)
		{
			putchar(d);
			putchar(i);
			if (!(d == 56 && i == 57))
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}