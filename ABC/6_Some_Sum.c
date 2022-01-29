/*
問題文
    1~Nの整数のうち，10進法で各桁の和がA以上B以下であるものの総和を求めてください

制約
    1 <= N <= 10^4
    1 <= A <= B <= 36
    入力は全て整数

入力
    N A B

出力
    1以上N以下の整数のうち、10進法での各桁の和がA以上B以下であるものの総和を出力せよ

入力例
    20 2 5

出力例
    84
*/

#include <stdio.h>
int main(void)
{
    int n,a,b;
    int ans=0;
    int v,w,x,y,z;
    int i;

    scanf("%d %d %d", &n,&a,&b);

    for(i=1; i<=n; i++)
    {
        v = i/10000;
        w = (i-10000*v)/1000;
        x = (i-10000*v-1000*w)/100;
        y = (i-10000*v-1000*w-100*x)/10;
        z = (i-10000*v-1000*w-100*x-10*y)/1;

        // printf("%d %d %d %d %d\n",v,w,x,y,z);

        if(v+w+x+y+z >= a && v+w+x+y+z <= b)
        {
            ans += i;
        }
    }

    printf("%d\n",ans);
    return 0;
}