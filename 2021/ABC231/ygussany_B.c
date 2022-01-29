#include<stdio.h>
int lex_smaller(char s1[], char s2[]){
    int i;
    for (i=0; s1[i] != 0 && s2[i] != 0; i++) {
        if (s1[i] < s2[i]) return 1;
        else if (s1[i] > s2[i]) return -1;
    }
    if (s1[i] == s2[i]) return 0;
    else if (s1[i] == 0) return 1;
    else return -1;
}

int main (void){
    int i, j, k, N, num[101];
    char S[11], T[101][11];
    scanf("%d", &N);
    for (i=1, k=0; i<=N; i++){
        scanf("%s", S);
        for (j=0; j<k; j++) if (lex_smaller(S, T[j])==0) break;
        if(j<k) num[j]++;
        else{
            for(j=0; S[j]!=0; j++) T[k][j] = S[j];
            T[k][j] = 0;
            num[k++] = 1;
        }
    }

    int max = 0, argmax;
    for(i=0; i<k; i++){
        if(max < num[i]){
            max = num[i];
            argmax = i;
        }
    }
    printf("%s\n", T[argmax]);
    ffllush(stdout);
    return 0;

}