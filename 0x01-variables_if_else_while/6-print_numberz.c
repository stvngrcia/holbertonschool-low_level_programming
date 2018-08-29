#include <stdio.h>

/**
 * main - prints 0-9 with newline only using putchar
 * Return: 0
 */

int main(void)
{
int a;
int n;

a = '0';
n = '\n';

while (a <= '9')
{
	putchar(a);
	a = a + 1;
}

putchar(n);

return (0);
}
