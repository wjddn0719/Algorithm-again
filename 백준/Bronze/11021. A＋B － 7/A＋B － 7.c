#include <stdio.h>
#include <stdint.h>

int main(void){
    int32_t T;
    scanf("%d", &T);
    for(int i = 0; i< T; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i+1, a+b);
    }
    return 0;
}