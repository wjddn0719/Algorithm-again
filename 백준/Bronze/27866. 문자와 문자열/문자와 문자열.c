#include <stdio.h>

int main(){
    char name[1000];
    short a;
    scanf("%s %hd", name, &a);
    printf("%c", *(name + (a-1)));
    return 0;
}