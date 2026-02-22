#include <stdio.h>

int main(){
    int a, sum = 0;
    scanf("%d", &a);
    if(a==1){
        printf("1/1");
        return 0;
    }
    int b = a;
    for(int i = 1; a>0; i++){
        sum++;
        a-=i;
    }
    int N = sum*(sum+1)/2 - (sum-1), k = sum;
    if(sum%2!=0){
        sum = sum * sum - (sum-1);
        for(int i = sum; i>=1; i-=(k-1)){
            if(N==b){
               printf("%d/%d\n", (i-1)/k+1, !(i%k) ? k : i%k);
            }
            N++;
        }
    }
    else{
        for(int i = sum; i<=sum*sum; i+=(k-1)){
            if(N==b){
                printf("%d/%d\n", (i-1)/sum+1, !(i%sum) ? sum : i%sum);
            }
            N++;
        }
    }
    return 0;
}