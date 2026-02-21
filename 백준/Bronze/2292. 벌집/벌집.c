#include <stdio.h>

int main(){
    int a, op = 0, s = 1;
    scanf("%d", &a);
    if(a==1){
        printf("1");
        return 0;
    }
    for(int i = 2; i <= 1000000000; i+=op){
        if(i<=a) s++;
        op+=6;
    }
    printf("%d", s);
    return 0;
}