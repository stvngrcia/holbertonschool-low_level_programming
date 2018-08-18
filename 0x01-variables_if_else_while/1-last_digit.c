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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	while (n > 9)
	{
		n = n - 10;
		}
		while (n < 0)
		{
			n = n + 10;
			}
			if (n > 5)
			{
				printf("%d and is greater than 5\n", n);
				}
				else
				{
					if (n < 6 && n != 0)
					{ printf("%d and is less than 6 and not 0\n", n);
					}
					else
					{
						printf("%d and is 0\n", n);
						}
						}
						return (0);
						}
