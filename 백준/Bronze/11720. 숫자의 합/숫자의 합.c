#include <stdio.h>

int main(){
    int numero[100], j = 0, total = 0, l;
    scanf("%d %ls", &l,numero);
    while(*(numero+j)!='\0'){
        total += *(numero+j)-48;
        j++;
    }
    printf("%d", total);
    return 0;
}