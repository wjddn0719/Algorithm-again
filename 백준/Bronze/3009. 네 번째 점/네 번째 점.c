#include <stdio.h>
    
int main(){
    short x[1001]={0}, y[1001]={0};
    for(int i=0; i<3; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        x[a]++;
        y[b]++;
    }
    for(int i=1; i<=1000; i++){
        if(x[i]%2!=0) printf("%d ", i);
    }
    for(int i=1; i<=1000; i++){
        if(y[i]%2!=0) printf("%d ", i);
    }
    return 0;
}