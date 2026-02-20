#include <stdio.h>

int main(){
    char name[15]={0}, i=0, t = 0;
    scanf("%s", name);
    while(*(name+i) != '\0'){
        if(*(name+i)-80 == 3 || *(name+i)-80 == 6 || *(name+i)-80 >= 9)t+= *(name+i)%'A'/3 + 2;   
        else t+= *(name+i)%'A'/3 + 3;
        i++;
    }
    printf("%d", t);
    return 0;
}