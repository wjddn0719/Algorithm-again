#include <stdio.h>

int main(){
    int a, b, map[101]={0,};
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++){
        map[i] = i;
    }
    for(int i = 0; i < b; i++){
        int k, l;
        scanf("%d %d", &k ,&l);
        int tmp = map[k];
        map[k] = map[l];
        map[l] = tmp;
    }
    for(int i = 1; i<=a; i++){
        printf("%d ", map[i]);
    }
    return 0;
}