#include <stdio.h>

int main(){
    short N,K, map[1000]={0};
    scanf("%hd %hd", &N, &K);
    for(int i=0; i<N; i++){
        scanf("%hd", (map+i));
    }
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if(map[i] > map[j]){
                short tmp = map[i];
                map[i] = map[j];
                map[j] = tmp;
            }
        }
    }
    printf("%hd", map[N-K]);
    
    return 0;
}