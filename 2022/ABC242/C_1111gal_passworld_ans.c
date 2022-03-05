#include <stdio.h>

const int Mod = 998244353;

int main (void) {
    int N;
    scanf("%d", &N);

    int i, j, cur, prev;
    unsigned int dp[2][10] = {};
    for (j = 1; j <= 9; j++) dp[0][j] = 1;
    for (i = 2, cur = 1, prev = 0; i <= N; i++, cur ^= 1, prev ^= 1) { // x^=y...xに(x^y)を代入...ビット排他的論理和
        for (j = 1; j <= 9; j++) {
            dp[prev][j] %= Mod;
            if (j > 1) dp[cur][j-1] += dp[prev][j];
            dp[cur][j] += dp[prev][j];
            if (j < 9) dp[cur][j+1] += dp[prev][j];
            dp[prev][j] = 0;
        }
    }

    long long ans = 0;
    for (i = 1; i <= 9; i++) ans += dp[prev][i];
    printf("lld\n", ans % Mod);
    fflush(stdout);
    return 0;
}