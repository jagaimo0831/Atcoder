#include <stdio.h>
#include <string.h>
int main (void) {
    // input
    char S[200001];
    scanf("%s", S);

    // processing & output
    int i, j, tmp;
    int stringlength = strlen(S);
    for (i=0; i<(stringlength-1); i++){
        for(j=(stringlength-1); j>i; j--){
            if(S[j-1] > S[j]) {
                tmp = S[j-1];
                S[j-1] = S[j];
                S[j] = tmp;
            }
        }
    }
    printf("%s\n", S);

    fflush(stdout);
    return 0;
}