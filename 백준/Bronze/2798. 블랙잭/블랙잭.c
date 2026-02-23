#include <stdio.h>

int absolute(int a){return a>=0 ? a: -1*a;}

int main(){
    char N;
    int M, map[100]={0,};
    scanf("%hhd %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%d", &map[i]);
    }

    int o = 300001, min = 300001;
    
    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++){
                if(M-(map[i]+map[j]+map[k]) < min && map[i]+map[j]+map[k]<=M){
                    o = map[i]+map[j]+map[k];
                    min = M-(map[i]+map[j]+map[k]);
                }
            }
        }
    }
    printf("%d", o);
    return 0;
}