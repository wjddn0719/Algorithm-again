#include <stdio.h>

int main(){
    char a, b, c;
    scanf("%hhd %hhd %hhd", &a, &b, &c);
    char max = (a>b ? a:b) > c ? (a>b ? a:b) : c;
    char M= max;
    if(max >= a+b+c-max){
        while(M >= a+b+c-max){
            max-=1;
        }
    }
    printf("%hd", a+b+c-M+max);
    return 0;
}