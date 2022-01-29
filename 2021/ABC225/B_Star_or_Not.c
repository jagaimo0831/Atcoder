#include <stdio.h>
int main(void){
    // input 
    int N;
    char a[100001];
    char b[100001];
    int i;

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%c %c", &a[i], &b[i]);
        printf("%d\n",i);
    }
    
    // processing & output
    /*
        スター型ならa[i],b[i]どちらかにずっと同じ数字が入っているはず
    */

   char ans[] = "Yes";
   int j;
   for(j=1; j<N; j++){
       if(a[0] != a[j] || a[0] != b[j]){
           char ans[]="No";
           break;
       }
   }

    int k;
    for(k=1; k<N; k++){
       if(b[0] != a[k] || b[0] != b[k]){
           char ans[]="No";
           break;
       }
   }

    printf("%s\n", ans);

    return 0;
    
}