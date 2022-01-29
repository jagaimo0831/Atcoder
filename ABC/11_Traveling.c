/*
問題文
    時刻0に(0,0)を出発，1以上N以下の各iに対し，時刻tiに(xi,yi)を訪れる予定．
    上下左右に移動可能（とどまることは不可）

制約
    1 <= N <= 10^5
    1 <= i <= N
    0 <= xi,yi,ti <= 10^5
    ti < t_i+1 (1 <= i <= N-1)
    入力は全て整数

入力
    N
    t1 x1 y1
    .
    .
    tn xn yn

出力
    Yes:実行可能
    No: (ry

入力例
    2
    3 1 2
    6 1 1

出力例
    Yes
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int N;
    int t[100001], x[100001], y[100001];
    int i, j;
    t[0]=0, x[0]=0, y[0]=0; // 初期値代入

    // 入力
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d %d %d", &t[i], &x[i], &y[i]);
    }


    int time, dist;

    // 判別処理
    for(j=1; j<=N; j++)
    {
        time = t[j]-t[j-1];
        dist = abs(x[j]-x[j-1]) + abs(y[j]-y[j-1]);

        if((time-dist)%2==1 || (time-dist)<0)
        {
            printf("No\n");
            return 0;
        }

    }

    printf("Yes\n");

    return 0;
}