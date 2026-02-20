#include <stdio.h>

int main(){
    char word[101]={0,}, p=0, t = 0;
    scanf("%s", word);
    while(*(word+p)!=0){
        if(*(word+p) == 'c' && *(word+p+1) == '='
            || *(word+p) == 'c' && *(word+p+1) == '-'
            || *(word+p) == 'd' && *(word+p+1) == '-'
            || *(word+p) == 'l' && *(word+p+1) == 'j'
            || *(word+p) == 'n' && *(word+p+1) == 'j'
            || *(word+p) == 's' && *(word+p+1) == '='
            || *(word+p) == 'z' && *(word+p+1) == '='){
            t++;
            p+=2;
        }
        else if(*(word+p) == 'd' && *(word+p+1) == 'z' && *(word+p+2) == '='){
            p+=3;
            t++;
        }
        else {
            t++;
            p++;
        }
    }
    printf("%d", t);
    return 0;
}