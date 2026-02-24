/*#include <stdio.h>
int main(){
    char y, x, map[51][50]={0}, min = 120, s_x = 0, s_y = 0;
    scanf("%hhd %hhd", &y, &x);
    for(int i=0; i<y; i++){
        scanf("%s", map[i]);
    }
    while(1){
        for(int k=0; k<=1; k++){
            char m=0;
            if(k && map[s_x][s_y]=='W') map[s_x][s_y] = 'B';
            else if(k) map[s_x][s_y] = 'W';
            for(int i=s_y; i<s_y+8; i++){
                for(int j=s_x; j<s_x+8; j++){
                    if((i+j)%2==(s_y+s_x)%2 && map[i][j]!=map[s_x][s_y]){
                        m++;
                    }
                    else if((i+j)%2!=(s_y+s_x)%2 && map[i][j]==map[s_x][s_y]){
                        m++;
                    } 
                }
            }
            if(m<min) min = m;
            if(k && map[s_x][s_y]=='W') map[s_x][s_y] = 'B';
            else if(k) map[s_x][s_y] = 'W';
        }
        if(x-8 > s_x){
            s_x++;
            continue;
        }
        else if(y-8 > s_y){
            s_x=0;
            s_y++;
            continue;
        }
        printf("%d", min); 
        return 0;
    }
}*/
#include <stdio.h>
int main(){
    char y, x, map[51][50]={0}, min = 120, s_x = 0, s_y = 0;
    scanf("%hhd %hhd", &y, &x);
    for(int i=0; i<y; i++){
        scanf("%s", map[i]);
    }
    while(1){
        for(int k=0; k<=1; k++){
            char m=0;
            if(k && map[s_y][s_x]=='W') {
                map[s_y][s_x] = 'B';
                m++;
            }
            else if(k) {
                map[s_y][s_x] = 'W';
                m++;
            }
            for(int i=s_y; i<s_y+8; i++){
                for(int j=s_x; j<s_x+8; j++){
                    if((i+j)%2==(s_y+s_x)%2 && map[i][j]!=map[s_y][s_x]){
                        m++;
                    }
                    else if((i+j)%2!=(s_y+s_x)%2 && map[i][j]==map[s_y][s_x]){
                        m++;
                    } 
                }
            }
            if(m<min) {
                min = m;
                continue;
            }
            if(k && map[s_y][s_x]=='W') map[s_y][s_x] = 'B';
            else if(k) map[s_y][s_x] = 'W';
        }
        if(x-8 > s_x){
            s_x++;
            continue;
        }
        else if(y-8 > s_y){
            s_x=0;
            s_y++;
            continue;
        }
        printf("%d", min); 
        return 0;
    }
}