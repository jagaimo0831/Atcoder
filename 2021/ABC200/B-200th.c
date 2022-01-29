/*
・問題
整数N，以下の操作をK回行う
    ・Nが200の倍数なら、Nを200で割る
    ・違う場合、Nの後ろに文字列として200を付け加えた整数に置き換える
ex. 7→7200、1234→1234200

・制約
    入力は整数
    1<=N<=10^5
    1<=K<=20

・入力
    N K

・出力
    答え

*/

#include <stdio.h>
#include <math.h>
int main(void)
{
   // input
   long N;
   int K;
   int amari;
   scanf("%ld %d", &N, &K);

   // processing
   int i;
   for(i=0; i<K; i++)
   {
       amari = N % 200;
       if(amari == 0)
       {
           N = N/200;
       }
       else
       {
           N = N*1000 + 200;
       }
   }

   // output
   printf("%ld\n", N);
} 