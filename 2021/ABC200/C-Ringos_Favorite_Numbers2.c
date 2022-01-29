/*
問題
    N個の正整数からなる数列A
        1<=i<j<=N
        Ai-Ajは200の倍数

制約
    入力は全て整数
    2<=N<=2*10^5
    1<=Ai<=10^9

入力
    N
    A1, A2 ... An
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    // input
    int N;
    scanf("%d",&N);
    int A[200001];
    int i;
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }

    // processing
    
}