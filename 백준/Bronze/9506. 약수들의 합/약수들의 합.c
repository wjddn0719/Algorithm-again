#include <stdio.h>

int perfect_number(int a){
    int tmp = a;
    for(int i = a-1; i>=1; i--){
        if(!(a%i)) tmp-=i;
        if(!tmp){
            return 1;
        }
    }
    return 0;
}

int main(){
    int a;
    while(1){
        scanf("%d", &a);
        if(a==-1) return 0;
        if(perfect_number(a)){
            printf("%d =", a);
            for(int i=1; i<=a/2; i++){
                if(i==a/2){
                    printf(" %d", i);
                }
                else if(a%i==0)printf(" %d +", i);
            }
        }    
        else{
            printf("%d is NOT perfect.", a);
        }
        printf("\n");
    }
    return 0;
}