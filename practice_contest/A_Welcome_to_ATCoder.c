/*
・問題文
高橋くんはデータの加工を行いたい．
整数a,b,cと文字列sが与えられる．
a+b+cの計算結果と文字列sを並べて表示しなさい

・制約
    1<=a,b,c<=1,000
    1<=|s|<=100

・入力
a
b c
s

・出力
a+b+cとsを空白区切りで1行に出力せよ．

*/

#include <stdio.h>
int main(void)
{
    int a = 1;
    int b = 2;
    int c = 3;
    char s[256] = "hello world" ;

    printf("%d %s\n",a+b+c,s);

    return 0;
}


/*
回答例

#include<stdio.h>
int main(void)
{
    int a,b,c;
    char s[101];
    // 整数の入力
    scanf("%d",&a);
    // スペース区切りの整数の入力
    scanf("%d %d", &b, &c);
    // 文字列の入力
    scanf("%s", s);
    // 出力
    printf("%d %s\n",a+b+c,s);
    return 0;
}
*/

