#include <stdio.h>

typedef struct{
    int x, y;
}coordinate;

coordinate sorted[100000]={0};

void merger(coordinate *a, int n, int middle, int m){
    int i=n;
    int j=middle+1;
    int k = n;

    while(i<=middle && j<=m){
        if(a[i].x > a[j].x){
            sorted[k++] = a[j++];
        }
        else if(a[i].x < a[j].x){
            sorted[k++] = a[i++];
        }
        else if(a[i].y > a[j].y){
            sorted[k++] = a[j++];
        }
        else{
            sorted[k++] = a[i++];
        }
    }
    if(i<=middle){
        for(int t=i; t<=middle; t++){
            sorted[k++] = a[t];
        }
    }
    if(j<=m){
        for(int t=j; t<=m; t++){
            sorted[k++]  =a[t];
        }
    }
    for(int t = n; t<=m; t++){
        a[t] = sorted[t];
    }
}

void merge(coordinate *a, int n, int m){
    if(n < m){
        int middle = (n+m)/2;
        
        merge(a, n, middle);
        merge(a, middle+1, m);

        merger(a, n, middle, m);
    }
}

int main(){
    int N;
    coordinate matrix[100000]={0};
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &matrix[i].x, &matrix[i].y);
    }
    merge(matrix, 0, N-1);
    for(int i=0; i<N; i++){
        printf("%d %d\n", matrix[i].x, matrix[i].y);
    }
    return 0;
}