#include <stdio.h>
int L = 0;

void checker(char *word){
    int AP[26]={0,};
    int i = 0;
    while(*(word+i) != '\0'){
        if(!AP[(*(word+i)%'a')] &&*(word+i) != *(word+i+1)){
            AP[(*(word+i)%'a')] = 1;
            i++;
        }
        else if(*(word+i) == *(word+i+1)) {
            i++;
        }
        else return;
    }
    L++;
}

int main(){
    char word[101]={0,}, N;
    scanf("%hhd", &N);
    for(int i = 0; i < N; i++){
        scanf("%s", word);
        checker(word);
    }
    printf("%d", L);
    return 0;
}