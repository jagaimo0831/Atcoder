#include <stdio.h>
int main (void) {
    int N;
    char T[100001];
    scanf("%d", &N);
    scanf("%s", T);

    int i, d = 0, x = 0, y = 0;
    for (i = 0; i < N; i++) {
        if (T[i] == 'S') {
            if (d == 0) x++;
            else if (d == 1) y--;
            else if (d == 2) x--;
            else y++;
        } else {
            d++;
            if (d >= 4) d -= 4;
        }
    }
    printf("%d %d\n", x, y);
    fflush(stdout);
    return 0;
}