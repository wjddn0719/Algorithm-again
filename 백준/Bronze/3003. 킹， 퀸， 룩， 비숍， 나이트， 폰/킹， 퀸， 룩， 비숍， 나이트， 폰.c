#include <stdio.h>

int main(){
    short chess[6] = {1, 1, 2, 2, 2, 8};
    for(int i = 0; i<6; i++){
        int a;
        scanf("%d", &a);
        chess[i]-=a;
    }
    for(int i = 0; i<6; i++){
        printf("%d ", chess[i]);
    }
    return 0;
}