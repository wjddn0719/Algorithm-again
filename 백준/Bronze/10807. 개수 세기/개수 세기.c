#include <stdio.h>

int main(){
    int map[100]={0};
    int N, v, j = 0;
    scanf("%d", &N);
    for(int i = 0; i<N; i++){
        scanf("%d", &map[i]);
    }
    scanf("%d", &v);
    for(int i = 0; i<N; i++){
        if(map[i]==v)j++;
    }
    printf("%d", j);
    return 0;
}