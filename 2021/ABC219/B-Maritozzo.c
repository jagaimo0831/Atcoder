#include <stdio.h>
#include <string.h>

int main(){
    // input 
    char T[1000];
        char* t;
        t = T;
    char S1[100];
        char* s1;
        s1 = S1;
    char S2[100];
        char* s2;
        s2 = S2;
    char S3[100];
        char* s3;
        s3 = S3;

    scanf("%s", s1); //文字列の入力の時は配列のポインタを渡してあげる
    scanf("%s", s2);
    scanf("%s", s3);
    scanf("%s", t);

    // processing
    int T_strlen = strlen(T);    
    int i;
    char ans[100000];  //確保するメモリ容量が少なかったからRE（実行エラー）出た

    for(i=0; i<T_strlen; i++){
        if(T[i] == '1'){
            strcat(ans, S1);
        }else if(T[i] == '2'){
            strcat(ans, S2);
        }else if(T[i] == '3'){
            strcat(ans, S3);
        }
    }

    // output
    printf("%s\n", ans);

    return 0;
}