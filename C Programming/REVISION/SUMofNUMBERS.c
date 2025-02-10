// WAP TO DISPLAY SUM OF N NUMBERS
#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("ENTER VALUE OF n: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("SUM OF FIRST %d NUMBERS = %d",n,sum);
    return 0;
}