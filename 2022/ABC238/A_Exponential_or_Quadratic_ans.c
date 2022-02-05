#include<stdio.h>
int main ()
{
    int N;
    scanf("%d", &N);
    if (N == 1 || N >= 5) printf("Yes\n");
    else printf("No\n");
    fflush(stdout);
    return 0;
}