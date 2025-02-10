// ADD ALL EVEN ELEMENTS OF AN ARRAY
#include <stdio.h>
int main()
{
    int a[5], i, s = 0;
    for (i = 0; i <= 4; i++)
    {
        printf("ENTER THE %d DATA = ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("ELELMENTS OF ARRAY = ");
    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n SUM OF EVEN ELEMENTS OF ARRAY = ");
    for (i = 0; i <= 4; i++)
    {
        if (a[i] % 2 == 0)
        {
            s = s + a[i];
        }
    }
    printf("%d\t", s);
    return 0;
}