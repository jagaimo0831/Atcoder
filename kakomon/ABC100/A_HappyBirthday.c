#include <stdio.h>
int main (void) {
    // input 
    int A, B;
    scanf("%d %d", &A, &B);

    // processing & output
    if(A<=8 && B<=8){
        printf("Yay!\n");
    }else{
        printf(":(\n");
    }

    fflush(stdout);
    return 0;
}