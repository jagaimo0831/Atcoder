#include <stdio.h>
int main (void) {
    // input
    int N;
    scanf("%d", &N);
    char S[N-1];
    scanf("%s", S);

    // processing & output
    printf("%c\n", S[N-1]);

    fflush(stdout);
    return 0;
}