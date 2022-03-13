#include <stdio.h>
int main (void) {
    // input 
    int V, A, B, C;
    scanf("%d %d %d %d", &V, &A, &B, &C);

    // processing & output
    while (V >= 0) { 
        V -= A;
        if (V < 0) {printf("F\n"); break;}
        V -= B;
        if (V < 0) {printf("M\n"); break;}
        V -= C;
        if (V < 0) {printf("T\n"); break;}
    }

    fflush(stdout);
    return 0;
}