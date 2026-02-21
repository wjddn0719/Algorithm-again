#include <stdio.h>

int main(){
    char map[100][100] ={0}, T, x, y;
    scanf("%hhd", &T);
    for(char i = 0; i<T; i++){
        scanf("%hhd %hhd", &x, &y);
        for(char j=x; j<x+10; j++){
            for(char k=y; k<y+10; k++){
                *(*(map+(100-k))+j) = 1;
            }
        }
    }
    int total = 0;
    for(char i = 0; i<100; i++){
        for(char j=0; j<100; j++){
            total+=*(*(map+i)+j);
        }
    }
    printf("%d", total);
    return 0;
}