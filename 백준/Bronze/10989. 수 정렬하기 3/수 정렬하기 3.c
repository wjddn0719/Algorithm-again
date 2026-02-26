#include <stdio.h>

int main(){
    int map[10001]={0};

    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        short a;
        scanf("%hd", &a);
        map[a]++;
    }
    for(short i=1; i<=10000; i++){
        for(int j=1; j<=map[i]; j++){
            printf("%d\n", i);
        }
    }
    return 0;
}