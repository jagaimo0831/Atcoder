#include <stdio.h>
int main(void)
{
    // input 
    char S[4][2];
    int i;
    for(i=0; i<4; i++)
    {
        scanf("%s",S[i]);
    }

    //processing
    int H=0, twoB=0, threeB=0, HR=0;
    int j;
    for(j=0; j<4; j++)
    {
        if(S[j][0]=='H')
        {
            if(S[j][1]=='R')
            {
                HR=1;
            }
            else
            {
                H=1;
            }
            
        }
        else if(S[j][0]=='2')
        {
            twoB=1;
        }
        else if(S[j][0]=='3')
        {
            threeB=1;
        }
    }

    // output
    if(H==1 && twoB==1 && threeB==1 && HR==1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}


/* 解説
    ソートをして比較する
*/

/* 最速コード（ygussany）
    ※ソートではなく，文字の足し算で整合性を見る
    文字コード...文字人1対1で対応する番号を付けて表現する方法
        文字には文字コード（10進数）とASCIIコード（16進数）の対応が存在する？
#include <stdio.h>

int main()
{
    char S[4][3];  //char型で記憶されたいる文字は，計算を行うことが可能（ex. Aが65，Bが66等）
    scanf("%s", S[0]);
    scanf("%s", S[1]);
    scanf("%s", S[2]);
    scanf("%s", S[3]);
    if((int)S[0][0] + S[1][0] + S[2][0] + S[3][0] == (int) 'H' + '2' + '3' + 'H' && ((int)S[0][1] + S[1][1] + S[2][1] + S[3][1] == (int)'B' + 'B' + 'R') printf("Yes\n");
    else printf("No\n");
    fflush(stdout);
    return 0;
}

*/