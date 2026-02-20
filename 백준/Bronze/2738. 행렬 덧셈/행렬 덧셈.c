#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    short matrix[100][100]={0};
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%hd", &*(*(matrix+i)+j));
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            char v;
            scanf("%hhd", &v);
            *(*(matrix+i)+j)+=v;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%hd ", *(*(matrix+i)+j));
        }
        printf("\n");
    }
}