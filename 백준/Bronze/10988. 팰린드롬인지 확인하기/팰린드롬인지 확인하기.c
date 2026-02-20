#include <stdio.h>

int main(){
    char word[100]={0,};
    scanf("%s", word);
    int i = 0, j=0;
    while(*(word+i) != '\0'){
        i++;
    }
    while(i>j){
        if(*(word+(i-1)) != *(word+j)){
            printf("0");
            return 0;
        }
        i--;
        j++;
    }
    printf("1");
    return 0;
}