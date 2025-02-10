#include<stdio.h>
int main(){
    int n = 20,s=0;
    while(n<=30){
        s=s+n;
        n=n+2;
    }
    printf("%d",s); 


    return 0; 
}