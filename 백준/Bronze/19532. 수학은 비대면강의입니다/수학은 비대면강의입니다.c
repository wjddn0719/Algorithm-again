#include <stdio.h>

int main(){
    short a, b, c, d, e, f;
    scanf("%hd %hd %hd %hd %hd %hd", &a, &b, &c, &d, &e, &f);
    for(short i = -999; i<=999; i++){
        for(short j=-999; j<=999; j++){
            if(a*i + b*j == c && d*i + e*j==f){
                printf("%hd %hd", i, j);
                return 0;
            }
        }
    }
}