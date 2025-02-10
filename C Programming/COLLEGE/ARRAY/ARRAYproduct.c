// FIND PRODUCT OF ELEMENTS IN ARRAY
#include<stdio.h>
int main()
{
    int a[3],i,P=1;
    for(i=0;i<3;i++)
    {
        printf("ENTER THE DATA : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        P=a[i]*P;
    }
    printf("PRODUCT=%d",P);
    return 0;
}