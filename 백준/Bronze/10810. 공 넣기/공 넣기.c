#include <stdio.h>

int main(){
    char map[101]={0,};
    int N, M;
    scanf("%d %d", &N, &M);
    for(int q = 0; q<M; q++){
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for(int w = i; w<=j; w++){
            map[w] = k;
        }
    }
    for(int i = 1; i<=N; i++){
        printf("%d ", map[i]);
    }
    return 0;
}