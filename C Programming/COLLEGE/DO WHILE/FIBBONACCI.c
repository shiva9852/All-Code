// WAP TO GENERATE FIRST 10 FIBBONACCI SERIES
#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 2, n3, i = 0;
    printf("%d", n1, n2);
    i = 2;
    while (i <= 10)
    {
        n3 = n1 + n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
        i++;
    }
    return 0;
}