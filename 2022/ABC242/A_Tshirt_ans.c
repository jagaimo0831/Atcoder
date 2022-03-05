#include <stdio.h>

int main ()
{
    int A, B, C, X;
    scanf("%d %d %d %d", &A, &B, &C, &X);
    if (X >= A) printf("1.0\n");
    else if (X > B) printf("0.0\n");
    else printf("%.7f\n", (double)C / (B - A));
    fflush(stdout);
    return 0;
}