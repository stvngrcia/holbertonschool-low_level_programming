#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Randomly prints number
 * States what last digit is and whether 0, < 6 or > 5
 * Return: 0
 */
int main(void)
{
	char n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	if (n % 10 > 5)
	{
		printf("%d and is greater than 5\n", n % 10);
	}
	else
	{
		if (n % 10 < 6 && n % 10 > 0)
		{
			printf("%d and is less than 6 and not 0\n", n % 10);
		}
		else
		{
			if (n % 10 == 0)
			{
				printf("%d and is 0\n", n % 10);
			}
			else
			{
				if ((n * -1) % 10 > 5)
				{
					printf("%d and is greater than 5\n", (n * -1) % 10);
				}
				else
				{
					if ((n * -1) % 10 < 6 && (n * -1) % 10 != 0)
					{
						printf("%d and is less than 6 and not 0\n", (n * -1) % 10);
					}
					else
					{
						printf("%d and is 0\n", (n * -1) % 10);
					}
				}
			}
		}
	}
	return (0);
}
