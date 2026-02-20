#include <stdio.h>

int main(){
    int map[31]={0,},k;
    for(int i = 1; i<=28; i++){
        scanf("%d", &k);
        map[k] = 1;
    }
    for(int i = 1; i <= 30; i++){
        if(map[i]==0)printf("%d\n", i);
    }
    return 0;
}