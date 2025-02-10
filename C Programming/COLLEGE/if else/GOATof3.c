// WAP TO DISPLAY GREATEST IN THREE NUMBERS '
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THE VALUE OF a : ");
    scanf("%d",&a);
     printf("ENTER THE VALUE OF b : ");
    scanf("%d",&b);
     printf("ENTER THE VALUE OF c : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("a IS GREATER THAN b AND c");
    }
    if(b>a && b>c)
    {
        printf("b IS GREATER THAN a AND c");
    }
    if(c>a && c>b)
    {
        printf("c IS GREATER THAN a AND b");
    }
    else
    printf("VALUE OF a,b,c ARE EQUAL ");
    return 0;
}