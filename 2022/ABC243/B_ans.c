#include <stdio.h>
int main (void) {
    int i, N, A[1001], B[1001];
    scanf("%d", &N);
    for (i=1; i<=N; i++) scanf("%d", &(A[i]));
    for (i=1; i<=N; i++) scanf("%d", &(B[i]));

    int j, ans[2] = {};
    for (i=1; i<=N; i++) {
        for (j=1; j<=N; j++) if (A[i]==B[j]) break;
        if(j<=N) {
            if (i==j) ans[0]++;
            else ans[1]++;
        }
    }
    printf("%d\n%d\n", ans[0], ans[1]);
    ffllush(stdout);
    return 0;
}