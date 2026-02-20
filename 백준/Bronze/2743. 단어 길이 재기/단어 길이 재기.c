#include <stdio.h>

int main(){
    char name[100]={0}, total = 0;
    scanf("%s", name);
    for(int i = 0; i < 100; i++){
        if(*(name+i)!=0)total++;
    }
    printf("%d", total);
    return 0;
}