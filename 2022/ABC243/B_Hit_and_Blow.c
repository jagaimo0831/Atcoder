#include <stdio.h>
int main (void) {
    // input 
    int N;
    scanf("%d", &N);
    int A[N], B[N];
    for (int i=0; i<N; i++) scanf("%d", &A[i]);
    for (int j=0; j<N; j++) scanf("%d", &B[j]);

    // processing & output
    int ans1=0, ans2=0;
    for(int i=0 ; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i==j && A[i]==B[j]) ans1 += 1;
            else if(i!=j && A[i]==B[j]) ans2 += 1;
        }
    }
    printf("%d\n%d\n", ans1, ans2);

    fflush(stdout);
    return 0;

}