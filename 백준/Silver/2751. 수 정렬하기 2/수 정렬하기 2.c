/*#include <stdio.h>

typedef struct{
    char word[50], length;
} words;

void existing(words *map){
    
}

void length(words *map){
    int i=0;
    while(map->word[i] != '\0'){
        i++;
    }
    map->length = i;
}

int main(){
    words map[20000];
    short N;
    scanf("%hd", &N);
    for(int i=0; i<N; i++){
        scanf("%s", map[i].word);
        if()
        length(&map[i]);
    }
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if(map[i].length > map[j].length){
                words tmp = map[i];
                map[i] = map[j];
                map[j] = tmp;
            }
            else if(map[i].length == map[j].length){
                for(int k=0; k<map[i].length; k++){
                    if(map[i].word[k] > map[j].word[k]){
                        words tmp = map[i];
                        map[i] = map[j];
                        map[j] = tmp;
                    }
                }
            }
        }
    }
    for(int i=0; i<N; i++){
        printf("%s\n", map[i].word);
    }
    return 0;
}*/

/*#include <stdio.h>

void quick_sort(int *map, int start, int end){
    int pivot = start, i = start + 1, j = end;
    if(i > j) return;
    while(i <= j){
        while(map[pivot] > map[i]) i++;
        while(map[pivot] < map[j]) j--;

        if(i < j){
            int tmp = map[i];
            map[i] = map[j];
            map[j] = tmp;
        }
        else{
            int tmp = map[pivot];
            map[pivot] = map[j];
            map[j] = tmp;
        }
    }

    quick_sort(map, j+1, end);
    quick_sort(map, start, j-1);
    
}

int main(){
    int N, map[1000000]={0};
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &map[i]);
    }
    quick_sort(map, 0, N-1);
    
    for(int i=0; i<N; i++){
        printf("%d\n", map[i]);
    }

}*/

#include <stdio.h>

int sorted[1000000]={0};

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
}




















