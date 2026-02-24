#include <stdio.h>

int main(){
    char number[11]={0}, k=0;
    scanf("%s", number);
    while(number[k]!='\0'){
        k++;
    }
    for(int i=0; i<k-1; i++){
        for(int j=i+1; j<k; j++){
            if(number[i] < number[j]){
                char tmp = number[i];
                number[i] = number[j];
                number[j] = tmp;
            }
        }
    }
    for(int i=0; i<k; i++){
        printf("%c", number[i]);
    }
    return 0;
}