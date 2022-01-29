#include <stdio.h>

#define TAX 1.08
#define PRICE 206

int main(void)
{
    // input
    int N;
    scanf("%d",&N);

    // processing & output
    int kakaku = N*TAX;

    if(kakaku < PRICE)
    {
        printf("Yay!\n");
    } 
    else if(kakaku == PRICE)
    {
        printf("so-so\n");
    }else if(kakaku > PRICE)
    {
        printf(":(\n");
    }

    return 0;
}