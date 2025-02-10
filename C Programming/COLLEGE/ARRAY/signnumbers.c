// WAP TO PRINT NUMBERS AND SHOW IT IS POSITIVE,NEGATIVE AND ZERO
#include<stdio.h>  
int main()
{
    int a[5],P,N,Z;
    printf("ENTER THE DATA \n");
    for(int i=0;i<5;i++)
    {
        printf("ELEMENT %d DATA: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    if(a[i]>0)
    {
        printf("ELEMENT IS POSITIVE %d \n",a[i]);
    }
    
    else if(a[i]<0)
    {
        printf("ELEMENT IS NEGATIVE %d \n",a[i]);
    }
    
    else if(a[i] ==0)
    {
        printf("ELEMENT IS ZERO %d \n ",a[i]);
    }
    return 0;
}