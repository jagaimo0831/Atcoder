#include <stdio.h>

int main(void)
{
    // input
    int N;
    int i,j;
    scanf("%d", &N);
    int A[N];
    for(i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }

    // processing & output
    int pair = 0;
    
    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(A[i] != A[j])
            {
                pair++;
            }
        }
    }

    printf("%d\n", pair);
}