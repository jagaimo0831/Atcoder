#include<stdio.h>
int main()
{
    long long int n;
    scanf("lld", &n);
    if(-((long long int)1 << 31) <= n && n < ((long long int)1 << 31))
        printf("Yes\n");
    else 
        printf("No\n");
    return 0;
}
