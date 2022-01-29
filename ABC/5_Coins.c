/*
問題文
    500*A
    100*B
    50*C
    total X

制約
    0 <= A,B,C <= 50
    A+B+C >= 1
    50 <= X <= 20,000
    ABCは整数
    Xは50の倍数

入力
    A
    B
    C
    X

出力
    硬貨を選ぶ方法の個数を出力

入力例
    2
    2
    2
    100

出力例
    2
*/

// ポイント: for文を用いた全探索，二重三重のfor文 

#include <stdio.h>
int main(void)
{
    int a,b,c,x;
    int ans=0;
    int i,j,k;

    //入力
    scanf("%d%d%d%d",&a,&b,&c,&x);
    // scanf("%d",&a);
    // scanf("%d",&b);
    // scanf("%d",&c);
    // scanf("%d",&x);
    

    //処理(全探索)
    for(i=0; i<=a; i++)
    {
        for(j=0; j<=b; j++)
        {
            for(k=0; k<=c; k++)
            {
                if(i*500 + j*100 + k*50 == x)
                {
                    ans += 1;
                }
            }
        }
    }
    
    printf("%d",ans);
    return 0;
}