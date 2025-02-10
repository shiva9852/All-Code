// WAP TO DISPLAY n ODD/EVEN NUMBERS
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("ENTER VALUE OF n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 != 0) //(i % 2 == 0)
            printf(" %d", i);
        i++;
    }
    return 0;
}