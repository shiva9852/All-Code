// COUNTING OF DIGITS OF A NUMBER
#include <stdio.h>
int main()
{
    int n, z = 0;
    printf("ENTER A NUMBER = ");
    scanf("%d", &n);
    while (n != 0)
    {
        z++;
        n = n / 10;
    }
    printf("TOTAL NUMBER OF DIGITS =%d ",z);
    return 0;
}