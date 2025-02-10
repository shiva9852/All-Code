// DISLAY ALL THE EVEN ELEMENTS OF THR ARRAY
#include <stdio.h>
int main()
{
    int a[10], i;
    for (i = 0; i <= 9; i++)
    {
        printf("ENTER THE %d DATA = ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n ELEMENTS OF ARRAY = ");
    for (i = 0; i <= 9; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n EVEN ELEMENTS OF ARRAY = ");
    for (i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\t", a[i]);
        }
    }
    return 0;
}