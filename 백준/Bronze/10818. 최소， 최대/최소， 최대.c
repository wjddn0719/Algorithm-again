#include <stdio.h>

int main(){
    int N, M=-1000001, m=1000001, a;
    scanf("%d", &a);
    for(int i = 0; i<a; i++){
         scanf("%d", &N);
         if(M<N) M = N;
         if(m>N) m= N;   
    }
    printf("%d %d",m, M);
    return 0;
} 