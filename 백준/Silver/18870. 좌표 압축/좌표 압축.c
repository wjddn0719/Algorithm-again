#include <stdio.h>

int sorted[1000000]={0};

void merger(int *a, int n, int middle, int m){
    int i = n;
    int j = middle+1;
    int k = n;
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
    if(n<m){
        int middle = (n+m)/2;

        merge(a, n, middle);
        merge(a, middle+1, m);

        merger(a, n, middle, m);
    }
}
int map[1000000]={0}, dp_map[1000000]={0}, FN[1000000]={0};
int binary_search(int key, int s, int e){
    if(s==e){
        if(FN[s] == key){
            return s;
        }
    }
    int mid = (s+e)/2;
    if(key > FN[mid]) return binary_search(key, mid+1, e);
    else return binary_search(key, s, mid);
}

int main(){
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &map[i]);
    }
    for(int i=0; i<N; i++){
        dp_map[i] = map[i];
    }
    merge(map, 0, N-1);
    int q=0;
     for(int i=0; i<N; i++){
        if(!i|| map[i-1] != map[i]){
            FN[q++] = map[i]; 
        }
    }
    
    for(int i=0; i<N; i++){
        printf("%d ", binary_search(dp_map[i], 0, q-1));
    }
    return 0;
}