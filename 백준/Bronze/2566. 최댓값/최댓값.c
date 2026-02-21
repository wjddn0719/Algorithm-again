#include <stdio.h>

typedef struct{
    char x, y, value;
}kino;

int main(){
    kino map[9][9]={0},max = {-1,-1,-1};;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%hhd", &(*(map+i)+j)->value);
            (*(map+i)+j)->x = i;
            (*(map+i)+j)->y = j;
    }
    for(int i =0; i<9; i++){
        for(int j = 0; j<9; j++){
            if((*(map+i)+j)->value > max.value){
                max.value = (*(map+i)+j)->value;
                max.x = (*(map+i)+j)->x;
                max.y = (*(map+i)+j)->y;
            }
        }
    }
}
    printf("%hhd\n%hhd %hhd", max.value, max.x+1, max.y+1);
}