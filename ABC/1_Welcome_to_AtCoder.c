/*
問題文
    データの加工
    整数a,b,cと文字列sが与えられる．
    a+b+cの計算結果と文字列sを並べて表示せよ

制約
    1<=a,b,c<=1,000
    1<=|s|<=100

入力形式
    a
    b c
    s

出力
    a+b+cとsを空白区切りで1行に出力せよ．

入力例
    1
    2 3
    test
*/

#include <stdio.h>
int main(void)
{
    int a, b, c;
    char str[100];

    //入力1つ目（a）
    scanf("%d", &a);

    //入力2つ目（b, c）
    scanf("%d %d", &b, &c);

    //入力3つ目(s)k
    scanf("%s", &str);

    printf("%d %s", a+b+c, str);


}


/*
解答例

#include<stdio.h>
int main()
{
    int a,b,c;
    char s[101];
    // 整数の入力
    scanf("%d", &a);
    // スペース区切りの整数の入力
    scanf("%d %d",&b,&c);
    // 文字列の入力
    scanf("%s",s);
    // 出力
    printf("%d %s\n",a+b+c,s);
    return 0;
}

*/