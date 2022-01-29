#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    // input
    int i;
    char S[15];
    char ans[] = "Hello,World!";
    scanf("%s", &S);
    

    // processing
    int j, cnt=0, len_S=strlen(S);
    for(j=0; j<len_S; j++){
        if(S[j] != ans[j]){
            cnt++;
        }
    }

    int len_ans=strlen(ans);
    if(len_S != len_ans){
        cnt++;
    }

    // output
    if(cnt == 0){
        printf("AC\n");
    }else if(cnt != 0){
        printf("WA\n");
    }

   

    // 文字列長比較
    // int length = strlen(S);
    // printf("%d\n", length);
    // int length2 = strlen(ans);
    // printf("%d\n", length2);

    return 0;
}