#include <stdio.h>
int main(void)
{
    // input
    int N;
    scanf("%d", &N);

    // processing & output
    int i=1;
    int total=0;

    while(1)
    {
        total += i;

        if(total < N)
        {
            i++;
        }
        else if(total >= N)
        {
            printf("%d\n", i);
            break;
        }
    }
}