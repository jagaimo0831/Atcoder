#include <stdio.h>

int main (void) {
    int N;
    scanf("%d", &N);
    int ans = 0;
    for(int i = 0; i < N; i++) {
        int a;
        scanf("%d", &a);
        while(a % 2 == 0) {a /= 2; ans++;}
    }

    printf("%d", ans);

    return 0;
}