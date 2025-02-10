//ADD ODD NUMBERS FROM 1 TO THIRTY
#include<stdio.h>
int main(){
    int n = 1, s = 0;
    while(n<=30){
        s = s + n;
        n = n + 2;
    }
    printf("SUM = %d",s);
    return 0;
}