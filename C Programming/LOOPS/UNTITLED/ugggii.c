#include<stdio.h>  
int main ()  
{  
    int i;  
    for(i = 0; i<10; i++)  
    {  
        printf("%d ",i);  
        if(i == 5)  
        break;  
    }  
    printf("came outside of loop i = %d",i);  
      
}  