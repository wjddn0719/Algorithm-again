#include <stdio.h>

int distance(int h, int w, int x, int y){
    int D = (w-y)*(w-y) + (h-x) * (h-x);
    for(int i=1; i*i<=D; i++){
        if(i*i >= D){
            return i;
        }
    }
}

int main(){
    short x, y, w, h, min = 20000;
    scanf("%hd %hd %hd %hd", &x, &y, &w, &h);
    for(int i=0; i<=h; i+=h){
        for(int j=0; j<=w; j++){
            if(min > distance(j, i, x, y)) min = distance(j, i, x, y);
        }
    }
    for(int i=0; i<=w; i+=w){
        for(int j=0; j<=h; j++){
            if(min > distance(i, j, x, y)) min = distance(i, j, x, y);
        }
    }
    printf("%d", min);
    return 0;
}