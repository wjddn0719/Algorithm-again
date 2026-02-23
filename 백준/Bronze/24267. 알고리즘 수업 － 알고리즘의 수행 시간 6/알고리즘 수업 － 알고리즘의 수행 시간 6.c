#include <stdio.h>

/*int MenOfPassion(int n){
    int sum = 0;
    for(int i=1; i<=n-2; i++){
        int l=0;
        for(int j=i+1; j<=n-1; j++){
            for(int k=j+1; k<=n; k++){
                printf("%d %d %d\n", i, j, k);
                sum++;
                l++;
            }
        }
        printf("i : %d\n", l);
    } 
    return sum;
}*/

int main(){
    int a;
    long long int sum=0;
    scanf("%d", &a);
    for(long long int i=a-2; i>=1; i--){
        sum= sum + i*(i+1)/2;
    }
    printf("%lld\n%d\n", sum, 3);
    return 0;
}