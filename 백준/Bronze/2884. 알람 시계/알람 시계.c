#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b-45 <= 0){
        a--;
        b=b-45+60;
    }
    else b-=45;
    if(b>=60) {
        a++;
        b = 0;
    }
    if(a < 0) a+=24;
    printf("%d %d", a, b);
    return 0;
}