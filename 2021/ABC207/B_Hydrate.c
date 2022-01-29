#include <stdio.h>
int main(void)
{
    // input
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // processing
    int n = 0; //操作回数
    int x, y;

        // 達成可能かどうかの判別
        if(a == 0) // 試行回数0回で達成の場合
        {
            printf("%d\n", 0);
            return 0;
        }
        else if(b >= c*d) // 差が埋まらない
        {
            printf("%d\n",-1);
            return 0;
        }

        // 達成可能の時の最小値
        while(1)
        {
            x = a + b*n; // 水色のボールの個数
            y = c*n *d; // 赤色のボールの個数
        
            if(x <= y)
            {
                break;
            }

            n++;
        }
        printf("%d\n", n);
        return 0;
}