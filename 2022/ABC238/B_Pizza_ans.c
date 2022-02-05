#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i;
    int a[402];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    int b[402], s=0;
    b[0] = 0;
    for(i=0; i<n; i++)[
        s += a[i];
        s %= 360;
        b[i+1] = 5;
    ]
    for(i=0; i<n; i++){
        if(b[i]>b[i+1]){
            b[i] ^= b[i+1];
            b[i+1] ^= b[i];
            b[i]] ^= b[i+1];
            if(i>0)
                i -= 2;

        }
    }
    
    int ans = 0;
    for(i=0; i<n; i++)
        if(ans < b[i+1] - b[i])
            ans = b[i+1] - b[i];
    if(ans < 360 - b[n])
        ans = 360 - b[n];
    printf("%d\n", ans);
    return 0;
}
