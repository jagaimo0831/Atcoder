#include<stdio.h>
#include<math.h>
int main(void){
    // input
    double N;
    scanf("%lf", &N);

    // processing & output
    long double A = powl(2.0, 31);
    if( -1*A <= N && N < A ){
        printf("Yes\n");   
    }else{
        printf("No\n");
    } 
    
    return 0;
}