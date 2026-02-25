#include <stdio.h>

int main(){
    int sum =0, a;
    for(char i=0; i<5; i++){
        scanf("%d", &a);
        sum+= a*a;
    }
    printf("%d", sum%10);
    return 0;
}