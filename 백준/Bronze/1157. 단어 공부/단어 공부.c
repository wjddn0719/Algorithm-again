#include <stdio.h>

int main(){
    char k, word[1000000]={0,};
    scanf("%s", word);
    int i = 0,alpabet[26]={0,};
    while(*(word+i)!='\0'){
        alpabet[*(word+i)%'a' >= 65 ? *(word+i)%65: *(word+i)%'a']++;
        i++;
    }
    int Max = 0, total = 0;
    for(int j = 0; j<26; j++){
        if(Max < *(alpabet + j)){
            Max = *(alpabet+j);
            k = j+65;
            total = 0;
        }
        if(Max == *(alpabet+j+1)) total = 1;
    }
    if(total)printf("?");
    else printf("%c", k);
    return 0;
}