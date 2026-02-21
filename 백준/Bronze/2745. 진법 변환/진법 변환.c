#include <stdio.h>

int main(void){
    char word[37]={0}, B, i=0;
    int total = 0;
    scanf("%s %hhd", word, &B);
    int op = 1;
    while(*(word+i) != 0) i++;
    for(int j=1; j<i; j++){
        op*=B;
    }
    i=0;
    while(*(word+i) != 0){
        total+=*(word+i) >= 'A' ? (*(word+i)%65+10)*op : *(word+i)%48*op;
        op/=B;
        i++;
    }
    printf("%d", total);
    return 0;
}