#include <stdio.h>
int main(){

    int p;
    int price;

    scanf("%d", &p);

    price = p * 1.08;

    if (price < 206) {
        printf("Yay!");
    }else if(price == 206) {
        printf("so-so");
    }else{
        printf(":(");
    }

    return 0;
}