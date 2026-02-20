#include <stdio.h>
#include <stdint.h>

int main(void){
    int32_t N;
    scanf("%d", &N);
    for(int i = 0; i < N/4; i++){
        printf("long ");
    }
    printf("int\n");
    return 0;
}