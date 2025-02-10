// PRODUCT OF FACTORS OF A NUMBER 
#include <stdio.h>
int main()
{
    int n, s = 1, x = 1;
    printf("ENTER A NUMBER = ");
    scanf("%d", &n);
    while (x <= n)
    {
        if (n % x == 0)
        {
            s = s * x;
        }
        x++;
    }
    printf("PRODUCT OF FACTORS = %d", s);
    return 0;
}