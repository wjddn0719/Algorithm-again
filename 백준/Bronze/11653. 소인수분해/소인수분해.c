#include <stdio.h>

int main(){
    int n, i=2;
    scanf("%d", &n);
    if(n==1)return 0;
    while(n>1){
        if(n%i==0){
            n/=i;
            printf("%d\n", i);
        }
        else i++;
    }
    return 0;
}