/*
問題文 
    N枚のカード．i枚目のカードにはaiと書いてある．
    Alice＆Bobの2人が交互に1枚ずつカードを取っていく．Aliceが先に取る．
    取ったカードの数の合計がその人の得点．
    2人とも得点が最大化するように最適な戦略を取った時，
    AliceはBobより何点多くとるか求めよ．

制約
    1 <= N <= 100; Nは整数;
    ai(1<=i<=N)は1~100の整数

入力
    N
    a1 a2 a3 ... an

出力
    両者が最適な戦略を取った時，AliceはBobよりも何点多く取るか出力せよ．

入力例
    2
    3 1

出力例
    2
*/

// Point: バブルソート...最下層から比較していき，小さいものが浮かび上がる

#include <stdio.h>
int main(void)
{
    int n;
    int a[110]; // 制約: 1 <= N <= 100 より
    int Allice = 0, Bob = 0;
    int i, j, k, l, m;
    int buff;


    // 入力
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    // バブルソート処理
    for(j=0; j<n-1; j++)
    {
        for(k=n-1; k>j; k--)
        {
            if(a[k-1] > a[k])
            {
                buff = a[k];
                a[k] = a[k-1];
                a[k-1] = buff;
            }
        }
    }

    // 各自の得点
    for(l=n-1; l>=0; l-=2)
    {
        Allice += a[l];
    }

    for(m=n-2; m>=0; m-=2)
    {
        Bob += a[m];
    }

    // 結果
    printf("%d\n", Allice-Bob);

    // // 確認用
    // int w;
    // for(w=0; w<n; w++)
    // {
    //     printf("%d",a[w]);
    // }

    
    return 0;
}