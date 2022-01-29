#include <stdio.h>
int main(void)
{
    // input 
    int n, x;
    scanf("%d %d", &n, &x);
    int i;
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // processing
    // 全て足してから，割引分を引く（intでn/2）
    int j;
    int discount = n/2;
    int sum = 0;
    for(j=0; j<n; j++)
    {
        sum += a[j];
    }
    sum -= discount;

    // output
    if(sum<=x)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}