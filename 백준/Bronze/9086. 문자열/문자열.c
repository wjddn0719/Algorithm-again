#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int j = 0;
        char name[1000];
        scanf("%s", name);
        while(name[j+1] != '\0')j++;
        printf("%c%c\n",*name, *(name+j));
    }
    return 0;
}