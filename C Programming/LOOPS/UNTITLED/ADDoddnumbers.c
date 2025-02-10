//ADD ALL THE ODD NUMBERS FROM 2 TO 30
#include<stdio.h>
int main(){
    int n = 3, s = 0;
    while (n<=30){
        s = s + n;
        n = n + 2;
    }
    printf("SUM=%d",s);
    return 0;
}