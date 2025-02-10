// WAP TO PRINT SUM OF ALL THE DIGITS OF A NUMBER
#include <stdio.h>
int main()
{
    int n, sum = 0, rem;
    {
        printf("ENTER VALUE OF n = ");
        scanf("%d", &n);
        while (n > 0)
        {
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }
        printf("SUM OF DIGITS=%d", sum);
    }
    return 0;
}