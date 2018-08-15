#include <stdio.h>

int main(void)
{
    char a;
    char b;

    a = '0';
    b = '\n';

    while (a <= '9')
    {
        putchar(a);
        a = a + 1;
    }

    putchar(b);

return 0;
}