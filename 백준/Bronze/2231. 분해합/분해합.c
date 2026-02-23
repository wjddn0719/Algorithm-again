#include <stdio.h>

int main(){
    int v;
    scanf("%d", &v);
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                for(int l =0; l<10; l++){
                    for(int p =0; p<10; p++){
                        for(int q=0; q<10; q++){
                            if(i*100000+j*10000+k*1000+l*100+p*10+q+i+j+k+l+p+q == v){
                                printf("%d", i*100000+j*10000+k*1000+l*100+p*10+q);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("0");
    return 0;
}