#include <stdio.h>
int main (void) {
    // input
    int N;
    char T[100001];
    scanf("%d", &N);
    for (int i=0; i<=N; i++) {
        scanf("%c", &T[i]);
    }

    // processing & output
    int dir = 0; // 0のとき東(東が初期値)
    int ans[2] = {0, 0};
    for (int i=0; i<=N; i++) {
        if (T[i] == 'S') {
            if (dir % 4 == 0)       ans[0]++; // 東
            else if (dir % 4 == 1)  ans[1]--; // 南
            else if (dir % 4 == 2)  ans[0]--; // 西
            else if (dir % 4 == 3)  ans[1]++; // 北
        } else if (T[i] == 'R') {
            dir++;
        }
    }

    printf("%d %d\n", ans[0], ans[1]);

    fflush(stdout);
    return 0;
}