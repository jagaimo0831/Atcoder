#include <stdio.h>
int main (void) {
    int v, a, b, c;
    scanf("%d %d %d %d", &v, &a, &b, &c);
    v %= a + b + c;
    if (v < a) {printf("F\n");}
    else if (v < a + b) {printf("M\n")}
    else {printf("T\n");}
    return 0;
}