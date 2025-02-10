// WAP TO DISPLAY EVEN NUMBER 1 TO 50
#include<stdio.h>
int main(){
    for(int i =1;i<=50;i++)
    {
        if(i%2==0){
        printf("\n%d",i);
        }
        
    }
    for(int i =1;i<=50;i++)
    {
        if(i%2!=0){
        printf("\n%d",i);
        }
        
    }

    return 0;
}