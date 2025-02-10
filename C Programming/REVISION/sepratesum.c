#include <stdio.h>
int main()
{
    int i, sumE=0, sumO=0;
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            sumE = sumE + i;
        }
        else
        {
            sumO = sumO + i;
        }
    }
    printf("%d\n", sumE);
    printf("%d", sumO);
    return 0;
}