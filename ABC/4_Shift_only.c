/*
問題文
    N個の正の整数 A1～AN
    整数が全て偶数の時
        全ての整数を2で割ったものに置き換える
    何回操作ができるのでしょうか

制約
    1 <= N <= 200
    1 <= Ai <= 10^9

入力
    N
    A1 A2 ... AN

出力
    何回操作できるか

入力例
    3
    8 12 40

出力例
    2
*/

#include <stdio.h>
int main(void)
{
    int n;
    int a[256];
    int count = 0;
    int i;

    //入力
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    //判別->処理
    while(1)
    {
        for(i=0; i<n; i++)
        {
            if((a[i]%2)==0)
            {
                a[i] /= 2;
            }
            else
            {
                break;
            }
        }

        if(i>=n)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}
