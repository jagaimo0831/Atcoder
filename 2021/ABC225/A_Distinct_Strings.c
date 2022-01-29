#include <stdio.h>
int main(void){
    // input
    char S[3];
    scanf("%s", S);

    // processing
    int sameNum = 0;
    if(S[0] == S[1]){
        sameNum++;
    }
    
    if(S[1] == S[2]){
        sameNum++;
    }

    if(S[0] == S[2]){
        sameNum++;
    }
    
    int ans = 0;

    if(sameNum == 0){
        ans = 6;
    }else if(sameNum == 1){
        ans = 3;
    }else if(sameNum == 3){
        ans = 1;
    }

    // output
    printf("%d\n", ans);
    return 0;
}