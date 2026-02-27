#include <stdio.h>

int binary_search(int *a, int key, int n, int m){
    if(n==m){
        if(a[n]==key) return 1;
        else return 0;
    }
    int mid = (n+m)/2;
    if(key > a[mid]) return binary_search(a, key, mid+1, m);
    else return binary_search(a, key, n, mid);
}

int sorted[500000]={0};

void merger(int *a, int n, int middle, int m){
    int i=n; 
    int j=middle+1;
    int k= n;
    while(i<=middle && j<=m){
        if(a[i] > a[j]){
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
            sorted[k++] = a[t];
         }
    }
    for(int t=n; t<=m; t++){
        a[t] = sorted[t];
    }
}

void merge(int *a, int n, int m){
    if(n < m){
        int middle = (n+m)/2;

        merge(a, n, middle);
        merge(a, middle+1, m);
        merger(a, n, middle, m);
    }
}

int main(){
    int N, map[500000]={0};
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d",(map+i));
    }
    merge(map, 0, N-1);
    int M;
    scanf("%d", &M);
    for(int i=0; i<M; i++){
        int tmp;
        scanf("%d", &tmp);
        printf("%d ", binary_search(map,tmp, 0, N-1) ? 1 : 0);
    }
}