#include<stdio.h>
/*
 * prime number between 1 - 100
 *
 */
int main(void)
{
	int i, j;

	for(i = 2; i < 100; i++)
	{
		if(!(i%j))
			break;
			if (j > (i/j))
  				printf("%d is prime\n", i);
	}
	return 0;
}
