#include <stdio.h>

/**
 * main - prints alphabet a-z
 * Return: 0
 */

int main(void)
{
char a;  /* declaration of character */
char b;

a = 'a';
b = '\n';

while (a <= 'z')
{
	putchar(a); /* putchar allows you to not have to store value and recall */
	a = a + 1;
}
putchar(b);
return (0);
}
