#include <stdio.h>
#include <math.h> //コンパイルの際に -lm が必要
int main(void){
    // input
    double N;
    scanf("%lf", &N);

    // processing
    double k=0;
    double root=2;
    while(1){
        double x = pow(root, k);
        if(x > N){
            break;
        }
        k++;
    }

    // output
    printf("%.0lf\n", k-1);

    return 0;
}