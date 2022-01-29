#include <stdio.h>
int main(void)
{
    // input 
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // processing
    int x, y, z;
    x = a + b;
    y = b + c;
    z = c + a;

    if(x>=y && x>=z)
    {
        printf("%d\n", x);
    }
    else if(y>=x && y>=z)
    {
        printf("%d\n", y);
    }
    else if(z>=x && z>=y)
    {
        printf("%d\n", z);
    }
}