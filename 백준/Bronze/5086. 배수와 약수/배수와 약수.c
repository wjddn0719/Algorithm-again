#include <stdio.h>

int main(){
     short a=1, b=1;
     while(1){
         scanf("%hd %hd", &a, &b);
         if(!a && !b) return 0;
         if(b%a==0){
             printf("factor\n");
         }
         else if(a%b==0){
             printf("multiple\n");
         }
         else{
             printf("neither\n");
         }
     }
    return 0;
}