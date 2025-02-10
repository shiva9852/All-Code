// WAP TO DISPLAY SUM OF 10 NATURAL NUMBERS
#include <stdio.h>
int main()
{
    int n, sum=0;
    for ( int n=1;n<=10;n++)
    {
        sum = sum + n;
    }
    printf("sum=%d",sum);
    return 0;
}