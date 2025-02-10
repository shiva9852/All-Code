// Input five numbers and add it such that negative number must not be added.
#include<stdio.h>
int main(){
    int n,x,s=0;
    for(x=1;x<=5;x++)
    {
        printf("ENTER A NUMBER = ");
        scanf("%d",&n);
        if(n<0)
        continue;
        s=s+n;
    }
    printf("SUM = %d",s);
    return 0;
}