#include <stdio.h>

char prime(short a){
    if(a==1) return 1;
    if(a==2) return 0;
    for(int j=2; j<=a-1; j++){
        if(!(a%j)) return 1;
    }
    return 0;
}

int main(){
    short N, a, o=0;
    scanf("%hd", &N);
    for(int i = 0; i<N; i++){
        scanf("%hd", &a);
        if(prime(a)) continue;
        o++;
    }
    printf("%hd", o);
    return 0;
}