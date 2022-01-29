#include <stdio.h>
int main(void){
    // input
    int X;
    scanf("%d", &X);

    // processing & output
    int ans=0;
    if(X<40){
        ans = 40-X;
        printf("%d\n", ans);
    }else if(X>=40 && X<70){
        ans = 70 - X;
        printf("%d\n", ans);
    }else if(X>=70 && X<90){
        ans = 90 - X;
        printf("%d\n", ans);
    }else if(X>=90 && X<=100){
        printf("expert\n");
    }
}