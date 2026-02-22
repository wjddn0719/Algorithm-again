#include <stdio.h>

int main(){
    short N, K, factor = 0;
    scanf("%hd %hd", &N, &K);
    for(int i = 1; i <= N; i++){
        if(!(N%i))factor++;
        if(factor==K){
            printf("%d", i);
            return 0;
        }
    }
    printf("%d", 0);
    return 0;
}