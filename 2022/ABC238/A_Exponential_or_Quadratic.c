#include<stdio.h>
#include<math.h>
int main(void){
    // Input
    int n;
    scanf("%d", &n);

    // Processing & Output
    if(pow(2, n)> pow(n, 2)) printf("Yes\n");
    else printf("No\n") ;

    return 0;
}