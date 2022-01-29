#include <stdio.h>
int main(void){
    //input 
    int N;
    scanf("%d",&N);

    //processing and output
    if(N>=1 && N<=125){
        printf("4\n");
    }else if(N>=126 && N<=211){
        printf("6\n");
    }else if(N>=212 && N<=214){
        printf("8\n");
    }
}