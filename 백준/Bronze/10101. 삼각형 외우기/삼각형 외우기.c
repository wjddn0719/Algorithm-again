#include <stdio.h>

int main(){
    short a, b, c;
    scanf("%hd %hd %hd", &a, &b, &c);
    if(a+b+c != 180){
        printf("Error");
        return 0;
    }
    if(a==b && b == c) printf("Equilateral");
    else if(a==b || a==c || b==c) printf("Isosceles");
    else printf("Scalene");
    return 0;
}