//ADD ALL THE NUMBERS -5 TO -1
#include<stdio.h>
int main(){
    int n = -5, s = 0;
    while(n<=-1){
        s = s + n;
        n++;
    }
    printf("SUM =%d",s);
    return 0;
}