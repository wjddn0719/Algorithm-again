#include <stdio.h>

int main(){
    int a, i, n, m = 0;
    for(i = 1; (scanf("%d", &a) != -1); i++){
        if(m<a){
            m = a;
            n = i;
        }
    }
    printf("%d\n%d", m, n);
    return 0;
}