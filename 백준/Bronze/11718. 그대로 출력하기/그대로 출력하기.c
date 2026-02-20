#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[100]={0,};
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }
    return 0;
}