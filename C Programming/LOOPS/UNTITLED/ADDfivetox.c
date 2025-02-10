// ADD NUMBERS FEOM 5 TO X
#include <stdio.h>
int main()
{
    int n = 5, s = 0, x;
    printf("Enter value of x = ");
    scanf("%d", &x);
    while (n <= x)
    {
        s = s + n;
        n++;
    }
    printf("SUM = %d", s);
    return 0;
}