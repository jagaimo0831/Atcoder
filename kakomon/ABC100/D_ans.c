#include <stdio.h>
#include <stdlib.h>
#define int long long

typedef struct {
    int val;
    int num;
}pair;

signed compare(const void *a, const void *b) {
    pair ap = *(pair *)a, bp = *(pair *)b;
    int sub = ap.val - bp.val;
    if (sub < 0) {
        return 1;
    } else if (sub == 0) {
        return 0;
    } else {
        return -1;
    }
}

int max (int a, int b) {
    return a >= b ? a : b;
}

int ABS (int a) {
    return a >= 0 ? a : -a;
}

signed main () {
    int N, M, i, j, k, l, xsum, ysum, zsum, ans = 0;
    scanf("%lld%lld", &N, &M);
    int *x = (int *)malloc(sizeof(int) * N);
    int *y = (int *)malloc(sizeof(int) * N);
    int *z = (int *)malloc(sizeof(int) * N);
    pair *w = (pair *)malloc(sizeof(pair) * N);
    for(i = 0; i < N; i++) {
        scanf("%lld%lld%lld", &x[i], &y[i], &z[i]);
    }
    for (j = -1; j <= 1; j += 2) {
        for
    }
}