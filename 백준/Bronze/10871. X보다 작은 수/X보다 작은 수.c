#include <stdio.h> 
int main(){int a, b;scanf("%d %d", &a, &b);for(int i = 0; i < a; i++){int k;scanf("%d", &k);if(k<b)printf("%d ", k);}return 0;}