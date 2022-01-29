// election...選挙

#include <stdio.h>
#include <string.h>
int main(void){
    // input
    int N, i;
    scanf("%d", &N);
    char S[N][11];
    for(i=0; i<N; i++){
        scanf("%s", S[N]);
    }

    int m;
    for(m=0; m<10; m++){
        printf("%c", S[0][m]);
    }

    // processing (ソートして比較)
    int count[N];
    int j, k;
    for(j=0; j<N; j++){
        count[j] = 0;
        for(k=j+1; k<N; k++){
            if(strcmp(S[j],S[k])==0){
                count[j] += 1;
            }
        }
    }

    // output (配列に格納された最大値にあたる文字列を出力)
    int max=0, l;
    for(l=0; l<N; l++){
        if(max <= count[l]){
            max = l;
        }
    }

    // printf("%s\n", S[max]);

    return 0;
}