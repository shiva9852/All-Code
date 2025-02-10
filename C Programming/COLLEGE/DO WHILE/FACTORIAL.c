// WAP TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
int main()
{
    int n,f=1,i=1;
    printf("ENTER A NUMBER = ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("%d\n",f);
    return 0;
}