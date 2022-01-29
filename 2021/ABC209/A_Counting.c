#include <stdio.h>
int main(void)
{
    // input 
    int a,b;
    scanf("%d %d", &a, &b);

    // processing
    // a,bの大小について考慮
    int ans;
    if(a<=b)
    {
        ans = b - a + 1;
    }
    else
    {
        ans = 0;
    }

    // output
    printf("%d\n", ans);
    
}