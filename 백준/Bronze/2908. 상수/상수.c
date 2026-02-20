#include <stdio.h>

void reverse(char *N){
    printf("%c%c%c", *(N+2), *(N+1), *N);
    return;
}

int main(){
    char a[4], b[4];
    scanf("%s %s", a, b);
    if(*(a+2) > *(b+2)) reverse(a);
    else if(*(a+2) < *(b+2)) reverse(b);
    else if(*(a+1) > *(b+1)) reverse(a);
    else if(*(a+1) < *(b+1)) reverse(b);
    else if(*a > *b) reverse(a);
    else reverse(b);
    return 0;
}