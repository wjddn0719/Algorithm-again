#include <stdio.h>

typedef struct{
    short age;
    char name[101];
    int date;
} list;

list ads[100000]={0};

list sorted[100000]={0};

void merger(list *a, int n, int middle, int m){
    int i = n;
    int j = middle+1;
    int k = n;
    while(i<=middle && j<=m){
        if(a[i].age < a[j].age){
            sorted[k++] = a[i++];
        }
        else if(a[i].age > a[j].age){
            sorted[k++] = a[j++];
        }
        else if(a[i].date < a[j].date){
            sorted[k++] = a[i++];
        }
        else {
            sorted[k++] = a[j++];
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

void merge(list *a, int n, int m){
    if(n < m){
        int middle = (n+m)/2;

        merge(a, n, middle);
        merge(a, middle+1, m);

        merger(a, n, middle, m);
    }
}

int main(){
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%hd %s", &(ads+i)->age, (ads+i)->name);
        (ads+i)->date = i;
    }
    merge(ads, 0, N-1);
    for(int i=0; i<N; i++){
        printf("%d %s\n", ads[i].age, ads[i].name);
    }
    return 0;
    
}