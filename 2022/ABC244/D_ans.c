#include <stdio.h>
int main (void) {
    char S[3][2], T[3][2];
    scanf("%s %s %s", S[0], S[1], S[2]);
    scanf("%s %s %s", T[0], T[1], T[2]);
    if (S[0][0] != T[0][0] && S[1][0] == T[1][0] && S[2][0] == T[2][0]) printf("Yes\n");
    else if (S[0][0] != T[0][0] && S[1][0] != T[1][0] && S[2][0] != T[2][0]) printf("Yes\n");
    else printf("No\n");
    fflush(stdout);
    return 0;
}