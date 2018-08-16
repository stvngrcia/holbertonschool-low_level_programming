#include <stdio.h>

int main(void)
{
    int a;
    int c;
    int s;
    int n;

    a = '0';
    c = ',';
    s = ' ';
    n = '\n';

    while(a <= '9')
    {
        putchar(a);
        putchar(c);
        putchar(s);
        
        a = a + 1;
    }
    putchar(n);
    return 0;
}