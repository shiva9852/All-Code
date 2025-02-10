// COUNT THE TOTAL NUMBER OF POSITIVE ELEMENTS OF THE ARRAY
#include <stdio.h>
int main()
{
    int a[6], i, x = 0;
    for (i = 0; i <= 5; i++)
    {
        printf("ENTER THE DATA = ");
        scanf("%d", &a[i]);
    }
    printf("\n ELEMENTS OF ARRAY = ");
    for (i = 0; i <= 5; i++)
    {
        printf("%d\t", a[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        if (a[i] > 0)
            x++;
    }
    printf("NUMBER OF POSITIVE ELEMENTS OF ARRAY = %d", x);
    return 0;
}