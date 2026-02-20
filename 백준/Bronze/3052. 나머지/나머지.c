#include <stdio.h>

int main(){
    int map[42]={0,};
    for(int i = 0; i<10; i++){
        int k;
        scanf("%d", &k);
        (*(map+k%42))++;
    }
    int t = 0;
    for(int i = 0; i<=41; i++){
        if(map[i])t++;
    }
    printf("%d", t);
    return 0;
}