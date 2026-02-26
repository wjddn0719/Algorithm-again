/*#include <stdio.h>

int sorted[1000000]={0};

typedef struct{
    
}

void merge(int a[], int n, int middle, int m){
    int i = n;
    int j = middle + 1;
    int k = n;

    while(i <= middle && j<=m){
        if(a[i] > a[j]){
            sorted[k] = a[j];
            j++;
        }
        else{
            sorted[k] = a[i];
            i++;
        }
        k++;
    }
    if(i <= middle){
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

void merger(int a[], int i, int j){
    if(i < j){
        int middle = (i+j)/2;

        merger(a, i, middle);
        merger(a, middle+1, j);

        merge(a, i, middle, j);
    }
}

int main(){
    int N, map[1000000] = {0};
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &map[i]);
    }
    merger(map, 0, N-1);

    for(int i=0; i<N; i++){
        printf("%d\n", map[i]);
    }
}*/

#include <stdio.h>

typedef struct{
    char word[51];
    char length;
} words;

char length_check(words a, words b){
    for(char i=0; i<(a.length > b.length ? a.length : b.length); i++){
        if(a.word[i] > b.word[i]) return 1;
        else if (a.word[i] < b.word[i]) return 0;
    }
    return -1;
}

words sorted[20000]={0};

void merger(words *a, short n, short middle, short m){
    short i = n;
    short j = middle+1;
    short k = n;

    while(i <= middle && j<=m){
        if(a[i].length < a[j].length){
            sorted[k] = a[i++];
        }
        else if(a[i].length > a[j].length){
            sorted[k] = a[j++];
        }
        else{
            if(length_check(a[i], a[j])==1){
                sorted[k] = a[j++];
            }
            else if(length_check(a[i], a[j])==0){
                sorted[k] = a[i++];
            }
            else{
                sorted[k] = a[i++];
            }
        }
        k++;
    }

    if(i <= middle){
        for(short t=i; t<=middle; t++){
            sorted[k++] = a[t];
        }
    }
    if(j <= m){
        for(short t=j; t<=m; t++){
            sorted[k++] = a[t];
        }
    }
    for(short t=n; t<=m; t++){
        a[t] = sorted[t];
    }
}

void merge(words *a, short n, short m){
    if(n < m){
        short middle = (n+m)/2;

        merge(a, n, middle);
        merge(a, middle+1, m);

        merger(a, n, middle, m);
    }
}

int main(){
    short N;
    words map[20000]={0};
    scanf("%hd", &N);
    for(short i=0; i<N; i++){
        scanf("%s", (map+i)->word);
        char k=0;
        while((map+i)->word[k] != '\0')k++;
        (map+i)->length = k;
    }
    merge(map, 0, N-1);

    for(short i=0; i<N; i++){
        if(i == 0 || length_check(map[i-1], map[i]) != -1){
            printf("%s\n", (map+i)->word);
        }
    }
    return 0;
}




















