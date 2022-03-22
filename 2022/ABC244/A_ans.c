#include <stdio.h>
int main (void) {
    int N;
    char S[1001];
    scanf("%d", &N);
    scanf("%s", &S);
    printf("%c\n", S[N-1]);
    fflush(stdout);
    return 0;
}