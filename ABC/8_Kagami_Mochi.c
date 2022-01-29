/*
問題文
    N枚の餅
    i枚目の餅の直径はdi
    全ての餅を使って鏡餅を作るとき，最大で何段重ねの鏡餅を作ることができるか
    ※上の餅は下の餅よりも直径が小さい

制約
    1 <= N <= 100
    1 <= di <= 100
    入力値は全て整数

入力
    N
    d1
    .
    .
    dn

出力
    作ることの出来る鏡餅の最大の段数
*/

/*
アプローチ
    ソート＋カウンタ？
*/

#include <stdio.h>
int main(void)
{
    int n;
    int d[110];
    int i, j, k, l;
    int buff;
    int count=1;

    // 入力
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &d[i]);
    }

    // ソート（バブル）
    for(j=0; j<n-1; j++)
    {
        for(k=n-1; k>j; k--)
        {
            if(d[k-1] > d[k])
            {
                buff = d[k];
                d[k] = d[k-1];
                d[k-1] = buff;
            }
        }
    }

    // 積み重ね処理
    for(l=0; l<n-1; l++)
    {
        if(d[l] < d[l+1])
        {
            count += 1;
        }
    }

    printf("%d\n",count);

    
    
    // // 確認用
    // printf("%d",d[0]);

    // int m;
    // for(m=0; m<n; m++)
    // {
    //     printf("%d",d[m]);
    // }
    

    return 0;  

}