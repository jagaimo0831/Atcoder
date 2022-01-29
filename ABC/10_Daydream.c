/*
問題文
    文字列S
    Tが空文字列
    以下の操作を繰り返して，S＝Tとできるか判定せよ
        Tの末尾に dream dreamer erase eraser のいずれかを追加する

制約
    1 <= |S| <= 10^5

入力
    S

出力
    YES：S=Tの時
    NO：それ以外

入力例
    erasedream

出力例
    YES
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[110000];
    int miss = 0;
    
    // 入力
    scanf("%s",s);

    // 処理（判別）...後ろから判別する
    int len;
    len = strlen(s);
    // printf("len=%d\n",len);

    int i = len-1; // 配列の最後尾
    while(s[i] != '\0' && i>=0) // \0はNULL文字，NULLポインタ
    {
        if(s[i] == 'r')  //dramer eraser
        {
            if(s[i-1]=='e' && s[i-2]=='m' && s[i-3]=='a' && s[i-4]=='e' && s[i-5]=='r' && s[i-6]=='d') //dreamer
            {
                i -= 7; 
            }
            else if(s[i-1] == 'e' && s[i-2] == 's' && s[i-3]=='a' && s[i-4]=='r' && s[i-5]=='e') //eraser
            {
                i -= 6;
            }
            else
            {
                printf("NO\n");
                return 0;                
            }
        }
        else if(s[i] == 'm' && s[i-1]=='a' && s[i-2]=='e' && s[i-3]=='r' && s[i-4]=='d') // dream
        {
            i -= 5;
        }
        else if(s[i] == 'e' && s[i-1] == 's' && s[i-2]=='a' && s[i-3]=='r' && s[i-4]=='e') // erase
        {
            i -= 5;
        }
        else // 間違いの時
        {
            printf("NO\n");
            return 0;
        }
    }

    if(miss == 0)
    {
        printf("YES\n");
    }
    
    return 0; 
}