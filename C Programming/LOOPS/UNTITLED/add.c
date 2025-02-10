// ADD ALL THE NUMBERS FROM 1 TO 10
#include <stdio.h>
int main()
{
    int n = 1, s = 0;
    while (n <= 10)
    {
        s = s + n;
        n++;
    }
    printf("sum = %d ",s);
    return 0;
}