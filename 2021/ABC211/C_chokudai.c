#include <stdio.h>
int main(void)
{
    // input
    char S[100000];
    scanf("%s", S);

    // processing
    int counter = 0;
    int answer = 0;
    
    while(1)
    {
        if(S[counter]=='c')
        {
            counter++;
            
            if(S[counter]=='h')
            {
                counter++;

                if(S[counter]=='o')
                {
                    counter++;

                    if(S[counter]=='k')
                    {
                        counter++;

                        if(S[counter]=='u')
                        {
                            counter++;

                            if(S[counter]=='d')
                            {       
                                counter++;

                                if(S[counter]=='a')
                                {
                                    counter++;

                                    if(S[counter]=='i')
                                    {
                                        counter++;
                                    }else
                                    {
                                        counter++;
                                    }
                    
                                }
                    
                            }
                    
                        }
                    
                    }

                }
            }
        }
    }

    // output


/* 解説
    この問題は難しい
    -> 蒸すかしい問題の時は，簡単バージョンを考える
    DP（Dynamic Programming）...動的計画法
        EDPC...dpまとめコンテストで勉強すると良い
*/


/* 最速コード（ygussany）
#include <stdio.h>

const in Mod = 1000000007;  //mod（剰余演算）用のやつ，cons修飾子は変数の前に記述し読み取り専用にする

int main()
{
    cahr S[100001];
    scanf("%s", S);

    int i, j, dp[9] = {};
    for(i = 0; S[i] != 0; i++){
        switch (S[i]){
        case 'c':
            dp[0]++;
            break;
        case 'h':
            dp[1] += dp[0];
            if (dp[1] >= Mod) dp[1] -= Mod;
            break;
        case 'o':
            dp[2] += dp[1];
            if(dp[2] >= Mod) dp[2] -= Mod;
            break;
        case 'k':
            dp[3] += dp[2];
            if (dp[3] >= Mod) dp[3] -= Mod;
            break;
        case 'u':
            dp[3] += dp[2];
            if (dp[3] >= Mod) dp[3] -= Mod;
            break;
        case 'd':
			dp[5] += dp[4];
			if (dp[5] >= Mod) dp[5] -= Mod;
			break;
		case 'a':
			dp[6] += dp[5];
			if (dp[6] >= Mod) dp[6] -= Mod;
			break;
		case 'i':
			dp[7] += dp[6];
			if (dp[7] >= Mod) dp[7] -= Mod;
			break;
        }
    }
    printf("%d\n", dp[7]);
    fflush(stdout);
    return 0;
}

*/
