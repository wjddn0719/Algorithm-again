#include <stdio.h>

int main(){
    char a;
    scanf("%hhd", &a);
    printf("%d", ((2<<a-1)+1)*((2<<a-1)+1));
    return 0;
}