#include <stdio.h>

char prime(int a){
    if (a==1) return 0;
    for(int j=2; j<=a-1; j++){
            if(!(a%j)) return 0;
    }
    return 1;
}

int main(){
    int N, M, sum=0, min=10001;
    scanf("%d %d", &N, &M);
    for(int i=N; i<=M; i++){
        if(i==2){
            min = 2;
            sum+=i;
            continue;
        }
        if(prime(i)){
            if(min > i) min = i;
            sum+=i;
        }
        
    }
    if(sum==0){
        printf("%d", -1);
        return 0;
    }
    printf("%d\n%d", sum, min);
    return 0;
}