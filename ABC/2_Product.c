/*
問題文
    正整数a,b
    a, bの積が偶数か奇数か判定せよ

制約
    1 <= a,b <= 10000
    a, b は整数

入力
    a  b

出力
    積が奇数なら Odd
    積が偶数なら Even

入力例
    3 4

出力例
    Even
*/


#include <stdio.h>
int main(void)
{
    int a, b;

    //入力
    scanf("%d %d",&a,&b);

    if(a*b % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}
