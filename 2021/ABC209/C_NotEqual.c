#include <stdio.h>
#include <math.h>
int main(void)
{
    // input
    int n;
    scanf("%d", &n);
    int c[n];
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &c[i]);
    }

    // processing
    int a_sum = 0;
    int kousei = pow(10, 9) + 7;
    // output
    printf("%d\n", a_sum % kousei);
}