#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        if (n % 6 == 0)
        {
            break;
        }
        printf("%d ", n);
    }
    return 0;
}