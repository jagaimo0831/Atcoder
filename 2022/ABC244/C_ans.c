#include <stdio.h>
int main (void) {
    int i, j, N, flag[2003] = {}; // Cでは配列の初期値が自動で0?
    scanf("%d", &N);
    flag[1] = 1;
    printf("1\n");  // 先手をとっているので初手1宣言が可能
    fflush(stdout);
    for (i = 1; i <= N; i++) {
        scanf("%d", &j);    // 相手番
        flag[j] = 1;        // 相手が宣言した数字を埋める?
        for (j = 1; j <= N*2+1; j++) if (flag[j] == 0) break;   // 宣言されていない数字になったらカウンタjを止める
        flag[j] = 1;        // これから宣言する数字を既出に設定する
        printf("%d\n", j);  // 自分手番
        fflush(stdout);
    }
    scanf("%d", &j); // 最後の相手の手番(実質降参宣言)
    return 0;
}