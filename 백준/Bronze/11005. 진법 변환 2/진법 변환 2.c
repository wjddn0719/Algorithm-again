#include <stdio.h>

int i = 0;
char bit[32] = {0,};

int divide(int a, char b){
    if(a==0) return a;
    bit[i++] = a%b > 9 ? a%b+55 : a%b+48;
    divide(a/b, b);
}

int main(){
    int a;
    char b;
    scanf("%d %hhd", &a, &b);
    divide(a, b);
    for(int j = i-1; j>=0; j--){
        printf("%c", bit[j]);
    }
    return 0;
}