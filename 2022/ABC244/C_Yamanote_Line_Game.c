#include <stdio.h>
int main (void) {
    // input
    int N;
    scanf("%d", &N);
    char List[2*N+1];
    for(int i=0; i<2*N+1; i++) List[i] = i + 1;

    // processing & output
    int aoki;
    for (int i=0; i<2*N+1; i++){
        if(List[i!=0]){
            printf("%d", List[i]);
            List[i] = 0;
        }
        scanf("%d", &aoki);
        List[aoki-1] = 0;
        
        fflush(stdout);
    }
    return 0;
}