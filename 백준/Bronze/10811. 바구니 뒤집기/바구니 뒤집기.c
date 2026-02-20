#include <stdio.h>

int main(){
    int N, M, map[101]={0,};
    scanf("%d %d", &N, &M);
    for(int i = 1; i<=N; i++){
        map[i] = i;
    }
    for(int i = 1; i <= M; i++){
        int q, w;
        scanf("%d %d", &q, &w);
        while(q < w){
            int tmp = map[q];
            map[q++] = map[w];
            map[w--] = tmp; 
        }
    }
    for(int i = 1; i<=N; i++){
        printf("%d ", map[i]);
    }
    return 0;
}