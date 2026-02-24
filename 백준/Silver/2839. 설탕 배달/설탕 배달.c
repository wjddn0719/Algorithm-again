#include <stdio.h>

int main(){
    short N, i, j, min = 5000;
    scanf("%hd", &N);
    for(i=0; i<=N; i+=5){
        for(j=0; j<=N; j+=3){
            if(j+i==N){
                if(min > i/5 + j/3) min = i/5+j/3;
            }
        }
    }
    if(min == 5000)printf("-1");
    else printf("%d", min);
    return 0;
}