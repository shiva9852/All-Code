#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        if (n % 2 == 0)
        {
            continue;
        }
        printf("%d ", n);
    }
    return 0;
}