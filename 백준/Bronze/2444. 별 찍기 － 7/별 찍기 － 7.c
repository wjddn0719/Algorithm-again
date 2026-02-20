#include <stdio.h>

int main(){
    char N;
    scanf("%hhd", &N);
    for(int i = 0; i<N; i++){
        for(int j = N-i-1; j>0; j--){
            printf(" ");
        }
        for(int j = 0; j<i*2+1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = N-1; i >= 0; i--){
        for(int j = 0; j<N-i; j++){
            printf(" ");
        }
        for(int j = 0; j<i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}