// FIND PRODUCTS OF NUMBERS FROM 1 TO 5
#include <stdio.h>
int main()
{
    int n = 1, s = 1;
    while (n <= 5)
    {
        s = s * n;
        n++;
    }
    printf("PRODUCT =%d", s);
    return 0;
}