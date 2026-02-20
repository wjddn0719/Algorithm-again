#include <stdio.h>

typedef struct{
    char existing;
    char location;
}A;

int main(){
    char word[100]={0,}, i = 0;
    A AP[26];
    for(int i = 0; i < 26; i++){
        AP[i].existing = 0;
        AP[i].location = -1;
    }
    scanf("%s", word);
    while(*(word + i) != '\0'){
        if(!AP[*(word+i)-97].existing){
            AP[*(word+i)-97].existing = 1;
            AP[*(word+i)-97].location = i;
        }
        i++;
    }
    for(int i = 0; i < 26; i++){
        printf("%d ", AP[i].location);
    }
    return 0;
}