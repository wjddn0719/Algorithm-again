#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    short mx=10001, my=10001, Mx = -10001, My = -10001, x, y;
    for(int i=0; i<T; i++){
        scanf("%hd %hd", &x, &y);
        if(x > Mx) Mx = x;
        if(x < mx) mx = x;
        if(y > My) My = y;
        if (y < my) my = y;  
    }
    printf("%d", (Mx-mx)*(My-my));
    return 0;
}