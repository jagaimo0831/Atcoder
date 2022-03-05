#include <stdio.h>

//ygussany
int main (void) {
    char S[200001];
    scanf("%s", S);

    int i, j, num[26] = {};
    for (i = 0; S[i] !=0; i++) num[S[i]] - 'a']++; //アルファベット26文字のそれぞれの数を計上している，S[i]!=0でstrlenを省略している，かしこい
    for (i = 0; i < 26; i++) for (j = 0; j < num[i]; j++) printf("%c", 'a' + i); //バブルソートと異なり，文字列の長さに依存しない，かしこい...
    printf("\n");   
    fflush(stdout);
    return 0;
}

// chro4849
/*
int main (void) {
    char s[200001] = {};

    int res = 0;

    int idx = 0;
    int cnt[26] = {};

    res = scanf("%s", s);

    while (s[idx] != '\0') {
        cnt[(int)(s[idx]-'a')]++;
        idx++;
    }
}
*/