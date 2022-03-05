#include <stdio.h>

int bekijo (int root, int exp){
    int i, output=1;
    for(i=0;  i<exp;i++){
        output = output * root;
    }
    return output;
}

int main (void) {
    // input
    int D, N;
    scanf("%d %d", &D, &N);

    // processing & output
    int ans;
    if(N==100){
        ans = N * bekijo(100, D) +1*bekijo(100, D); //N=100の時の例外処理を忘れずに
    }else{
        ans = N * bekijo(100, D);
    }
    printf("%d\n", ans);    

    fflush(stdout);
    return 0;
}