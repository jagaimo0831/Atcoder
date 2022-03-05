#include <stdio.h>
int main (void) {
    // input
    int A, B, C, X;
    scanf("%d %d %d %d", &A, &B, &C, &X);

    // processing & output
    double ans;
    if (X <= A) {
        ans = 1;
    } else if (X > A && X <= B) {
        ans = (double)C / ((double)B - (double)A); // int同じの除算は小数点以下は切り捨てされる(整数の割り算の商)
    } else if (X > B && X <= 1000) {
        ans = 0;
    }
    printf("%lf\n", ans);

    fflush(stdout);
    return 0;
}