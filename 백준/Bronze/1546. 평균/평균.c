#include <stdio.h>

int main(){
    float map[1000]={0};
    short N;
    scanf("%hd", &N);
    for(int i = 0; i < N; i++){
        scanf("%f", &map[i]);
    }
    float M = -1;
    for(int i = 0; i < N; i++){
        if(map[i] > M) M = map[i];
    }
    float total = 0;
    for(int i = 0; i < N; i++){
        total += map[i]/M*100;
    }
    printf("%.2f", total/N);
    return 0;
}