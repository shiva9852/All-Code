// ADD ALL THE NUMBERS FROM 1 TO 5
#include <stdio.h>
int main()
{
    int n = 1, s = 0;
    do
    {
        s = s + n;
        n++;
    } while (n <= 5);
    printf("SUM= %d", s);
    return 0;
}
