#include <stdio.h>
int main(void)
{
    //入力
    int N;
    scanf("%d",&N);
    char S[1001][16];
    int T[1001];
    int i;
    for(i=0; i<N; i++)
    {
        scanf("&s &d",&S[i],T[i]);
    }

    // バブルソート
    int j,k;
    int buff=0;
    int buffjun[N];
    int l;
    for(l=0; l<N; l++)
    {
        buffjun[l] = l;
    }

    for(j=0; j<N; j++)
    {
        for(k=N-1; k>j; k--)
        {
            if(T[k] < T[k-1])
            {
                buff = T[k-1];
                T[k-1] = T[k];
                T[k] = buff;

                buff = buffjun[k-1];
                buffjun[k-1] = buffjun[k];
                buffjun[k] = buff;
            }

        }
    }

    // 出力
    int kotae = buffjun[N-2];
    printf("%s\n",S[kotae]);

}