#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int i = 0; i<T; i++){
        short money;
        scanf("%hd", &money);
        printf("%hhd %hhd %hhd %hhd\n", money/25, money%25/10, money%25%10/5, money%25%10%5/1);
    }
    return 0;
}