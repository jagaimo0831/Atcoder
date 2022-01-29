/*
問題文
    1~3の番号がついた3つのマスからなるマス目を持っている．
    各マスには0 or 1が書かれており，マスiにはsiが書かれている．

    1が書かれたマスにビー玉を置く．ビー玉が置かれるマスがいくつあるか求めよ．

制約
    s1,s2,s3は1or0

入力
    s1s2s3

出力
    答えを出力

入力例
    101

出力例
    2
*/



#include <stdio.h>
int main(void)
{
    int input;
    int ans = 0;

    //s1~3の入力
    scanf("%d", &input);

    int s[3];
    s[0] = input/100;
    s[1] = (input-s[0]*100)/10;
    s[2] = (input-s[0]*100-s[1]*10);

    int i = 0;
    while(i<3)
    {
      if(s[i]==1)
      {
          ans = ans + 1;
      }
      i++;
    }

    printf("%d\n",ans);
    
    // printf("%d %d %d\n",s[0],s[1],s[2]);

    return 0;
}