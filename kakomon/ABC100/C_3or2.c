#include <stdio.h>
int main (void) {
    // input 
    int N; 
    int a[10001];
    int i;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d ", &a[i]);
    }

    // processing & output
    int ans=0;
    int j;
    for(j=0; j<N; j++){
        while(a[j] % 2 == 0){
            ans += 1;
        }
    }

    printf("%d", ans);

    fflush(stdout);
    return 0;
}