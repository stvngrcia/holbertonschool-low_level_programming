#include <stdio.h>

/**
 * main - This prints every lowercase letter except e & q
 * Return: 0
 */

int main(void)
{
char a;
char b;

a = 'a';
b = '\n';

while (a <= 'z')
{
	putchar(a);

	if (a == 'p' || a == 'd')
	{
		a = a + 2;
	}
	else
	{
		a = a + 1;
	}
}

putchar(b);

return (0);
}
