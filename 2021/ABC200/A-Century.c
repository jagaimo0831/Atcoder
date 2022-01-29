// 西暦N年は何世紀か

#include <stdio.h>
int main(void)
{
    // input
    int N; //1<=N<=3000
    scanf("%d",&N);

    // processing
    int x; // 世紀
    int y=0; // 前後か
    x = N / 100;
    if(N%100!=0)
    {
        y = 1;
    }

    // output
    printf("%d\n",x+y);
}