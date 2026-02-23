#include <stdio.h>

int main(){
    short a1, a0, c, n0;
    scanf("%hd %hd %hd %hd", &a1, &a0, &c, &n0);
    for(int i=n0; i<=100; i++){
        if(a1*i + a0 > (c * i)){
            printf("%d", 0);
            return 0;
        }
    }
    printf("%d", 1);
    return 0;
}