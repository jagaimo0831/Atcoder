#include <stdio.h>
int main (void) {
    // input 
    int N; 
    scanf("%d", &N);

    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }

    // processing & output
    int ans=0;
    int j;
    for(j=0; j<N; j++){
        while(a[j] % 2 == 0){
            a[j] = a[j] / 2;    //ここの記述が無いからずっと無限ループになっていた...ゴミが
            ans += 1;
        }
    }

    printf("%d\n", ans);

    fflush(stdout);
    return 0;
}