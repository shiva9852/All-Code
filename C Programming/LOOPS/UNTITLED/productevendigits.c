// FIND PRODUCT OF EVEN DIGITS OF A NUMBER
#include <stdio.h>
int main()
{
    int n, s = 1, x;
    printf("ENTER A NUMBER = ");
    scanf("%d", &n);
    while (n != 0)
    {
        x = n % 10;
        if (x % 2 == 0)
            s = s * x;
        n = n / 10;
    }
    printf("PRODUCT OF EVEN DIGITS = %d", s);
    return 0;
}