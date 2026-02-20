#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        char word[20], R, t = 0;
        scanf("%hhd %s", &R, word);
        while(*(word + t)!= '\0'){
            for(int k = 0; k < R; k++){
                printf("%c",*(word+t));
            }
            t++;
        }
        printf("\n");
    }
    return 0;
}