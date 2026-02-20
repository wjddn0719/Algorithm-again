#include <stdio.h>

int main(){
    float op = 0;
    int deop = 0;
    for(int i = 0; i < 20; i++){
        char major[51]={0}, rating[2]={0};
        float score;
        scanf("%s %f %s", major, &score, rating);
        if(*(rating) == 'P')continue;
        deop+=score;
        if(*(rating) == 'A' && *(rating+1)=='+') op += 4.5*score;
        else if(*(rating) == 'A' && *(rating+1)=='0') op += 4.0*score;
        else if(*(rating) == 'B' && *(rating+1)=='+') op += 3.5 * score;
        else if(*(rating) == 'B' && *(rating+1)=='0') op += 3.0 * score;
        else if(*(rating) == 'C' && *(rating+1)=='+') op += 2.5 * score;
        else if(*(rating) == 'C' && *(rating+1)=='0') op+=2.0*score;
        else if(*(rating) == 'D' && *(rating+1)=='+') op+=1.5*score;
        else if(*(rating) == 'D' && *(rating+1)=='0') op+=1.0*score;
    }
    printf("%.4f", op/deop);
    return 0;
}