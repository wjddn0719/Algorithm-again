#include <stdio.h>

char pythagoras(short a, short b, short c);

int main(){
    short a, b, c;
    while(1){
        scanf("%hd %hd %hd", &a, &b, &c);
        if(!a && !b && !c) return 0;
        if(pythagoras(a, b, c))printf("Invalid\n");
        else{
            if(a==b && b==c)printf("Equilateral\n");
            else if(a==b || b==c || a==c)printf("Isosceles\n");
            else printf("Scalene\n");
        }
    }
}

char pythagoras(short a, short b, short c){
    short max = (a>b ? a:b) > c ? (a>b?a:b) : c;
    if(max < a+b+c - max) return 0;
    return 1;
}